#!/usr/bin/env python3
"""Prioritize unresolved indirect branches with byte/halfword table idioms.

This is a triage list, not proof that an indirect branch is a switch.
"""
import json
from pathlib import Path
import sqlite3

from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
OUT = DB.parent / 'switch-candidates.json'


def main():
    db = sqlite3.connect(DB)
    files = {}
    candidates = []
    query = '''SELECT f.address,f.size,f.route,f.status,f.quality_flags,
                      a.path,a.start_offset,a.end_offset
               FROM functions f JOIN assembly_ranges a USING(address)
               WHERE f.status IN ('seed_ready','review')'''
    for address, size, route, status, raw_flags, filename, start, end in db.execute(query):
        if filename not in files:
            files[filename] = Path(filename).read_bytes()
        assembly = files[filename][start:end]
        if b'\tbctr' not in assembly:
            continue
        kinds = [kind for opcode, kind in ((b'\tlbzx', 'byte'), (b'\tlhzx', 'halfword'))
                 if opcode in assembly]
        if not kinds:
            continue
        flags = json.loads(raw_flags or '[]')
        candidates.append({'address': f'0x{address:08X}', 'size': size,
                           'route': route, 'seed_status': status,
                           'indexed_loads': kinds, 'quality_flags': flags})
    candidates.sort(key=lambda row: (
        row['seed_status'] != 'review', row['size'], row['address']))
    OUT.write_text(json.dumps(candidates, indent=2) + '\n')
    print(json.dumps({'candidates': len(candidates),
                      'review': sum(x['seed_status'] == 'review' for x in candidates),
                      'output': str(OUT)}, indent=2))


if __name__ == '__main__':
    main()
