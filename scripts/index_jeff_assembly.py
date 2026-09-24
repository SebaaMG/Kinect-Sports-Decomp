#!/usr/bin/env python3
"""Index byte ranges of Jeff function assembly for fast private task packets."""
import json
import bisect
from pathlib import Path
import re
import shutil
import sqlite3

ROOT = Path(__file__).resolve().parent.parent
BUILD = ROOT / 'build/4D5308C9'
from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
SNAPSHOT = LAB / 'analysis/jeff-assembly-snapshot/4D5308C9'
START = re.compile(rb'^\.fn\s+([^,\s]+),')
END = re.compile(rb'^\.endfn\s+(\S+)')
INSTRUCTION = re.compile(rb'^/\* ([0-9A-Fa-f]{8}) ')
SYMBOL = re.compile(r'^(\S+) = \.text:0x([0-9A-Fa-f]+); // type:function')


def scan(path, symbols):
    with path.open('rb') as stream:
        active = None
        while True:
            offset = stream.tell()
            line = stream.readline()
            if not line:
                break
            start = START.match(line)
            if start:
                name = start[1].decode('utf-8', 'replace')
                active = (name, symbols.get(name), offset)
                continue
            end = END.match(line)
            if end and active and end[1].decode('utf-8', 'replace') == active[0]:
                if active[1] is not None:
                    yield active[1], str(path), active[2], stream.tell()
                active = None


def main():
    # Jeff rewrites build/asm whenever splits change. Index a private snapshot
    # so byte offsets remain valid throughout matching work.
    if not SNAPSHOT.is_dir():
        SNAPSHOT.parent.mkdir(parents=True, exist_ok=True)
        shutil.copytree(BUILD / 'asm', SNAPSHOT)
    db = sqlite3.connect(DB)
    db.execute('''CREATE TABLE IF NOT EXISTS assembly_ranges (
      address INTEGER PRIMARY KEY, path TEXT NOT NULL,
      start_offset INTEGER NOT NULL, end_offset INTEGER NOT NULL)''')
    paths = (list(SNAPSHOT.glob('auto_*_text.s')) +
             list((SNAPSHOT / 'auto_match').glob('func_*.s')) +
             list((SNAPSHOT / 'compiler_probe').glob('*.s')))
    symbols = {}
    for line in (ROOT / 'config/4D5308C9/symbols.txt').read_text().splitlines():
        match = SYMBOL.match(line)
        if match:
            symbols[match[1]] = int(match[2], 16)
    count = 0
    with db:
        db.execute('DELETE FROM assembly_ranges')
        for path in paths:
            rows = list(scan(path, symbols))
            db.executemany('''INSERT INTO assembly_ranges(address,path,start_offset,end_offset)
              VALUES(?,?,?,?) ON CONFLICT(address) DO UPDATE SET
              path=excluded.path,start_offset=excluded.start_offset,
              end_offset=excluded.end_offset''', rows)
            count += len(rows)
        missing = db.execute('''SELECT f.address,f.size FROM functions f LEFT JOIN assembly_ranges a
            ON a.address=f.address WHERE a.address IS NULL ORDER BY f.address''').fetchall()
        starts = [address for address, _ in missing]
        found = {}
        for path in paths:
            with path.open('rb') as stream:
                while True:
                    offset = stream.tell()
                    line = stream.readline()
                    if not line:
                        break
                    match = INSTRUCTION.match(line)
                    if not match:
                        continue
                    address = int(match[1], 16)
                    index = bisect.bisect_right(starts, address) - 1
                    if index < 0:
                        continue
                    start, size = missing[index]
                    if address >= start + size:
                        continue
                    prior = found.get(start)
                    if prior is None or (str(path) == prior[0] and offset < prior[1]):
                        found[start] = (str(path), offset, stream.tell())
                    elif str(path) == prior[0]:
                        found[start] = (prior[0], prior[1], stream.tell())
        db.executemany('''INSERT INTO assembly_ranges(address,path,start_offset,end_offset)
          VALUES(?,?,?,?) ON CONFLICT(address) DO UPDATE SET path=excluded.path,
          start_offset=excluded.start_offset,end_offset=excluded.end_offset''',
          [(address, *value) for address, value in found.items()])
    indexed = db.execute('''SELECT COUNT(*) FROM functions f JOIN assembly_ranges a
      ON a.address=f.address''').fetchone()[0]
    print(json.dumps({'source_files': len(paths), 'ranges_scanned': count,
                      'jeff_functions_with_assembly': indexed}))


if __name__ == '__main__':
    main()
