#!/usr/bin/env python3
"""Reexport Ghidra functions that reference incoming stack arguments."""

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
from lab_paths import LAB

ROOT = Path(__file__).resolve().parent.parent
BASE = LAB / 'analysis/full-game-export/progress.sqlite'
REVISION = 'xenon-stack-abi-v1'
OUT = LAB / 'analysis/full-game-export/revisions' / REVISION
DB = OUT / 'progress.sqlite'
PROJECTS = {
    'scalar': (LAB / 'tools/ghidra_12.1.3_PUBLIC', LAB / 'analysis', 'KinectSports'),
    'xenon': (LAB / 'tools/ghidra_12.1.3_xenon', LAB / 'analysis-xenon',
              'KinectSportsXenonRaw'),
}
STACK_NAME = re.compile(rb'\bin_stack_[0-9a-fA-F]+\b')
CALLING_CONVENTION = re.compile(rb'\b__xenon_stack\s+')


def connect():
    OUT.mkdir(parents=True, exist_ok=True)
    db = sqlite3.connect(DB)
    db.execute('PRAGMA journal_mode=WAL')
    db.execute('''CREATE TABLE IF NOT EXISTS functions (
      address INTEGER PRIMARY KEY, size INTEGER NOT NULL, route TEXT NOT NULL,
      status TEXT NOT NULL DEFAULT 'pending', attempts INTEGER NOT NULL DEFAULT 0,
      c_path TEXT, c_sha256 TEXT, c_bytes INTEGER, error TEXT, updated_at INTEGER)''')
    with sqlite3.connect(BASE) as baseline, db:
        for address, size, route, path in baseline.execute('''
            SELECT address,size,route,c_path FROM functions
            WHERE route IN ('scalar','xenon') AND status IN ('seed_ready','review')
              AND c_path IS NOT NULL'''):
            if STACK_NAME.search(Path(path).read_bytes()):
                db.execute('INSERT OR IGNORE INTO functions(address,size,route) VALUES (?,?,?)',
                           (address, size, route))
    return db


def export_batch(db, route, rows, number):
    ghidra, project, name = PROJECTS[route]
    if not (ghidra / 'support/analyzeHeadless').is_file():
        raise FileNotFoundError(ghidra)
    batches = OUT / 'batches'
    batches.mkdir(exist_ok=True)
    manifest = batches / f'{route}-{number:04d}.txt'
    manifest.write_text(''.join(f'0x{address:08X} {size}\n' for address, size in rows))
    output = OUT / 'c' / route
    output.mkdir(parents=True, exist_ok=True)
    logs = OUT / 'logs'
    logs.mkdir(exist_ok=True)
    log = logs / f'{route}-{number:04d}.log'
    command = [str(ghidra / 'support/analyzeHeadless'), str(project), name,
               '-process', 'default.xex', '-readOnly', '-noanalysis',
               '-scriptPath', str(ROOT / 'tools'), '-postScript', 'DecompileBatch.java',
               str(manifest), str(output), '--mask-save-helper-calls',
               '--mask-fpr-helper-calls', '--xenon-stack-abi']
    if route == 'scalar':
        command.append('--type-known-crt')
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
    failures = read_failures(output / 'failures.txt')
    now = int(time.time())
    with db:
        for address, _ in rows:
            path = output / f'0x{address:08X}.c'
            if path.is_file() and path.stat().st_size:
                code = CALLING_CONVENTION.sub(b'', path.read_bytes())
                path.write_bytes(code)
                db.execute('''UPDATE functions SET status='exported',c_path=?,
                  c_sha256=?,c_bytes=?,error=NULL,updated_at=? WHERE address=?''',
                  (str(path), hashlib.sha256(code).hexdigest(), len(code), now, address))
            else:
                error = failures.get(address, f'Ghidra exit {exit_code}; see {log}')
                db.execute('''UPDATE functions SET status='failed',error=?,updated_at=?
                              WHERE address=?''', (error, now, address))
    print(json.dumps({'route': route, 'batch': number, 'requested': len(rows),
                      'exit_code': exit_code, 'seconds': round(time.monotonic() - start, 1),
                      'log': str(log)}), flush=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['run', 'status'])
    parser.add_argument('--route', choices=['scalar', 'xenon', 'all'], default='all')
    parser.add_argument('--batch-size', type=int, default=100)
    parser.add_argument('--limit', type=int)
    parser.add_argument('--retry-failed', action='store_true')
    args = parser.parse_args()
    if not 1 <= args.batch_size <= 500:
        parser.error('--batch-size must be 1..500')
    db = connect()
    if args.action == 'run':
        states = "('pending','failed')" if args.retry_failed else "('pending')"
        routes = PROJECTS if args.route == 'all' else {args.route: PROJECTS[args.route]}
        remaining = args.limit
        for route in routes:
            rows = db.execute(f'''SELECT address,size FROM functions WHERE route=?
                AND status IN {states} AND attempts<3 ORDER BY size,address''', (route,)).fetchall()
            if remaining is not None:
                rows = rows[:remaining]
                remaining -= len(rows)
            existing = [int(p.stem.split('-')[-1]) for p in (OUT / 'batches').glob(f'{route}-*.txt')]
            number = max(existing, default=-1) + 1
            for index in range(0, len(rows), args.batch_size):
                export_batch(db, route, rows[index:index + args.batch_size], number)
                number += 1
    counts = dict(db.execute('SELECT status,COUNT(*) FROM functions GROUP BY status'))
    routes = dict(db.execute('SELECT route,COUNT(*) FROM functions GROUP BY route'))
    print(json.dumps({'revision': REVISION, 'status': counts, 'routes': routes,
                      'database': str(DB)}), flush=True)


if __name__ == '__main__':
    main()
