#!/usr/bin/env python3
"""Export a versioned Xenon C inventory without changing the baseline ledger."""
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
GHIDRA = Path(os.environ.get('GHIDRA_ROOT', str(LAB / 'tools/ghidra_12.1.3_xenon')))
BASE = LAB / 'analysis/full-game-export/progress.sqlite'
REVISION = 'xenon-alias-addsub-v1'
OUT = LAB / 'analysis/full-game-export/revisions' / REVISION
DB = OUT / 'progress.sqlite'
PROJECT = LAB / 'analysis-xenon'


def affected_functions(baseline, mnemonics):
    if not mnemonics:
        yield from baseline.execute("SELECT address,size FROM functions WHERE route='xenon'")
        return
    pattern = re.compile(rb'\t(?:' + b'|'.join(re.escape(m.encode()) for m in mnemonics)
                         + rb')(?:\.|\s)')
    files = {}
    query = '''SELECT f.address,f.size,a.path,a.start_offset,a.end_offset
               FROM functions f JOIN assembly_ranges a USING(address)
               WHERE f.route='xenon' '''
    for address, size, path, start, end in baseline.execute(query):
        if path not in files:
            files[path] = Path(path).read_bytes()
        if pattern.search(files[path][start:end]):
            yield address, size


def connect(mnemonics=(), seed=True):
    OUT.mkdir(parents=True, exist_ok=True)
    db = sqlite3.connect(DB)
    db.execute('PRAGMA journal_mode=WAL')
    db.execute('''CREATE TABLE IF NOT EXISTS functions (
      address INTEGER PRIMARY KEY, size INTEGER NOT NULL, status TEXT NOT NULL,
      attempts INTEGER NOT NULL DEFAULT 0, c_path TEXT, c_sha256 TEXT,
      c_bytes INTEGER, error TEXT, updated_at INTEGER)''')
    if seed:
        with sqlite3.connect(BASE) as baseline, db:
            db.executemany('''INSERT OR IGNORE INTO functions(address,size,status)
                              VALUES (?,?,'pending')''',
                           affected_functions(baseline, mnemonics))
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
               'KinectSportsXenonRaw', '-process', 'default.xex', '-readOnly',
               '-noanalysis', '-scriptPath', str(ROOT / 'tools'), '-postScript',
               'DecompileBatch.java', str(manifest), str(folder),
               '--mask-save-helper-calls']
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
    global REVISION, OUT, DB
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['run', 'status'])
    parser.add_argument('--revision', default=REVISION)
    parser.add_argument('--mnemonics', default='',
                        help='comma-separated Jeff mnemonics to re-export')
    parser.add_argument('--batch-size', type=int, default=200)
    parser.add_argument('--limit', type=int)
    parser.add_argument('--retry-failed', action='store_true')
    args = parser.parse_args()
    if not 1 <= args.batch_size <= 1000:
        parser.error('--batch-size must be 1..1000')
    REVISION = args.revision
    if not re.fullmatch(r'[a-zA-Z0-9-]+', REVISION):
        parser.error('--revision must be a simple name')
    OUT = LAB / 'analysis/full-game-export/revisions' / REVISION
    DB = OUT / 'progress.sqlite'
    mnemonics = tuple(filter(None, (item.strip() for item in args.mnemonics.split(','))))
    if any(not re.fullmatch(r'[a-z][a-z0-9]*', name) for name in mnemonics):
        parser.error('--mnemonics must contain simple instruction names')
    if args.action == 'run' and REVISION != 'xenon-alias-addsub-v1' and not mnemonics:
        parser.error('--mnemonics is required for a targeted revision')
    db = connect(mnemonics, seed=args.action == 'run')
    if args.action == 'status':
        status(db)
        return
    if not (GHIDRA / 'support/analyzeHeadless').is_file():
        parser.error(f'Patched Ghidra installation missing: {GHIDRA}')
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
