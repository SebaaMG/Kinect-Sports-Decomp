#!/usr/bin/env python3
"""Export a versioned scalar C overlay for Jeff-confirmed CRT callers."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import sqlite3
import subprocess
import time
from decompile_failures import read_failures

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
GHIDRA = Path(os.environ.get('GHIDRA_ROOT', str(LAB / 'tools/ghidra_12.1.3_PUBLIC')))
BASE = LAB / 'analysis/full-game-export/progress.sqlite'
REVISION = 'scalar-crt-v1'
OUT = LAB / 'analysis/full-game-export/revisions' / REVISION
DB = OUT / 'progress.sqlite'
PROJECT = LAB / 'analysis'
CRT = ('memcpy', 'memset', 'memmove', 'memcmp', 'memchr', 'strstr',
       'strncmp', 'stricmp', 'strchr', 'strrchr', 'strncpy', 'isalpha',
       'isupper', 'isdigit', 'isxdigit', 'isspace', 'isalnum', 'tolower', 'toupper')
CALL = re.compile(rb'\tbl (' + b'|'.join(name.encode() for name in CRT) + rb')\b')


def callers(baseline):
    files = {}
    query = '''SELECT f.address,f.size,a.path,a.start_offset,a.end_offset
               FROM functions f JOIN assembly_ranges a USING(address)
               WHERE f.route='scalar' AND f.status IN ('seed_ready','review')'''
    for address, size, filename, start, end in baseline.execute(query):
        if filename not in files:
            files[filename] = Path(filename).read_bytes()
        if CALL.search(files[filename][start:end]):
            yield address, size


def connect():
    OUT.mkdir(parents=True, exist_ok=True)
    db = sqlite3.connect(DB)
    db.execute('PRAGMA journal_mode=WAL')
    db.execute('''CREATE TABLE IF NOT EXISTS functions (
      address INTEGER PRIMARY KEY, size INTEGER NOT NULL, status TEXT NOT NULL,
      attempts INTEGER NOT NULL DEFAULT 0, c_path TEXT, c_sha256 TEXT,
      c_bytes INTEGER, error TEXT, updated_at INTEGER)''')
    with sqlite3.connect(BASE) as baseline, db:
        db.executemany('''INSERT OR IGNORE INTO functions(address,size,status)
                          VALUES (?,?,'pending')''', callers(baseline))
    return db


def status(db):
    counts = dict(db.execute('SELECT status,COUNT(*) FROM functions GROUP BY status'))
    print(json.dumps({'revision': REVISION, 'total': sum(counts.values()),
                      'status': counts, 'database': str(DB)}, indent=2), flush=True)


def run_batch(db, rows, number):
    folder = OUT / 'c'
    folder.mkdir(exist_ok=True)
    batches = OUT / 'batches'
    batches.mkdir(exist_ok=True)
    logs = OUT / 'logs'
    logs.mkdir(exist_ok=True)
    manifest = batches / f'batch-{number:04d}.txt'
    manifest.write_text(''.join(f'0x{a:08X} {size}\n' for a, size in rows))
    log = logs / f'batch-{number:04d}.log'
    command = [str(GHIDRA / 'support/analyzeHeadless'), str(PROJECT),
               'KinectSports', '-process', 'default.xex', '-readOnly',
               '-noanalysis', '-scriptPath', str(ROOT / 'tools'), '-postScript',
               'DecompileBatch.java', str(manifest), str(folder),
               '--mask-save-helper-calls', '--type-known-crt',
               '--type-sport-selector']
    with db:
        db.executemany('UPDATE functions SET attempts=attempts+1 WHERE address=?',
                       [(address,) for address, _ in rows])
    start = time.monotonic()
    try:
        with log.open('wb') as stream:
            result = subprocess.run(command, stdout=stream, stderr=subprocess.STDOUT,
                                    timeout=3600)
        exit_code = result.returncode
    except subprocess.TimeoutExpired:
        exit_code = 124
    failures = read_failures(folder / 'failures.txt')
    now = int(time.time())
    with db:
        for address, _ in rows:
            path = folder / f'0x{address:08X}.c'
            if path.is_file() and path.stat().st_size:
                data = path.read_bytes()
                db.execute('''UPDATE functions SET status='exported',c_path=?,
                  c_sha256=?,c_bytes=?,error=NULL,updated_at=? WHERE address=?''',
                  (str(path), hashlib.sha256(data).hexdigest(), len(data), now, address))
            else:
                error = failures.get(address, f'Ghidra exit {exit_code}; see {log}')
                db.execute('''UPDATE functions SET status='failed',error=?,updated_at=?
                              WHERE address=?''', (error, now, address))
    print(json.dumps({'batch': number, 'requested': len(rows), 'exit_code': exit_code,
                      'seconds': round(time.monotonic()-start, 1),
                      'log': str(log)}), flush=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['run', 'status'])
    parser.add_argument('--batch-size', type=int, default=200)
    parser.add_argument('--limit', type=int)
    parser.add_argument('--retry-failed', action='store_true')
    args = parser.parse_args()
    if not 1 <= args.batch_size <= 1000:
        parser.error('--batch-size must be 1..1000')
    db = connect()
    if args.action == 'status':
        status(db)
        return
    if not (GHIDRA / 'support/analyzeHeadless').is_file():
        parser.error(f'Ghidra installation missing: {GHIDRA}')
    states = "('pending','failed')" if args.retry_failed else "('pending')"
    rows = db.execute(f'''SELECT address,size FROM functions WHERE status IN {states}
                           AND attempts<3 ORDER BY size,address''').fetchall()
    if args.limit is not None:
        rows = rows[:args.limit]
    existing = [int(path.stem.split('-')[-1]) for path in (OUT / 'batches').glob('batch-*.txt')]
    next_number = max(existing, default=-1) + 1
    for start in range(0, len(rows), args.batch_size):
        run_batch(db, rows[start:start+args.batch_size], next_number)
        next_number += 1
    status(db)


if __name__ == '__main__':
    main()
