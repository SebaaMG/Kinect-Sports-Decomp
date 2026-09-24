#!/usr/bin/env python3
"""Resumeable full-game Ghidra C-seed export; all outputs remain private on SSD."""
import argparse
import fcntl
import hashlib
import json
import os
from pathlib import Path
import re
import sqlite3
import subprocess
import sys
import time
from decompile_failures import read_failures

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
GHIDRA = Path(os.environ.get('GHIDRA_ROOT', str(LAB / 'tools/ghidra_12.1.3_PUBLIC')))
STATE = LAB / 'analysis/full-game-export'
DB = STATE / 'progress.sqlite'
SYMBOLS = ROOT / 'config/4D5308C9/symbols.txt'
VMX = LAB / 'analysis/vmx128-functions.json'
FUNCTION = re.compile(r'^(\S+) = \.text:0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)')


def connect():
    STATE.mkdir(parents=True, exist_ok=True)
    db = sqlite3.connect(DB)
    db.execute('PRAGMA journal_mode=WAL')
    db.execute('''CREATE TABLE IF NOT EXISTS functions (
      address INTEGER PRIMARY KEY, size INTEGER NOT NULL, symbol TEXT NOT NULL,
      route TEXT NOT NULL, status TEXT NOT NULL DEFAULT 'pending',
      attempts INTEGER NOT NULL DEFAULT 0, c_path TEXT, c_sha256 TEXT,
      c_bytes INTEGER, quality_flags TEXT, error TEXT,
      match_percent REAL, updated_at INTEGER)''')
    db.execute('''CREATE TABLE IF NOT EXISTS match_evidence (
      address INTEGER PRIMARY KEY, code_match_percent REAL NOT NULL,
      compiler TEXT NOT NULL, flags TEXT NOT NULL, evidence_path TEXT NOT NULL,
      verified_at INTEGER NOT NULL)''')
    return db


def prepare(db):
    vmx = {int(item['address'], 16) for item in json.loads(VMX.read_text())}
    rows = []
    for line in SYMBOLS.read_text().splitlines():
        match = FUNCTION.match(line)
        if match:
            address = int(match[2], 16)
            rows.append((address, int(match[3], 16), match[1],
                         'xenon' if address in vmx else 'scalar'))
    with db:
        db.executemany('''INSERT INTO functions(address,size,symbol,route) VALUES(?,?,?,?)
          ON CONFLICT(address) DO UPDATE SET size=excluded.size,
          symbol=excluded.symbol,route=excluded.route''', rows)
    print(json.dumps({'indexed': len(rows), 'xenon': len(vmx), 'database': str(DB)}))


def quality(code):
    flags = []
    for marker, label in (('halt_baddata', 'bad_data'), ('UNDECODED', 'undecoded'),
                          ('unknownOp', 'unknown_op'),
                          ('vectorConditionalSelect', 'vector_userop'),
                          ('loadVectorLeftIndexed128', 'vector_userop')):
        if marker in code and label not in flags:
            flags.append(label)
    if len(code.strip()) < 25:
        flags.append('very_short_c')
    return flags


def status(db):
    counts = dict(db.execute('SELECT status,COUNT(*) FROM functions GROUP BY status'))
    routes = dict(db.execute('SELECT route,COUNT(*) FROM functions GROUP BY route'))
    verified = db.execute('SELECT COUNT(*) FROM match_evidence WHERE code_match_percent=100').fetchone()[0]
    print(json.dumps({'total': sum(counts.values()), 'status': counts, 'routes': routes,
                      'verified_matches': verified, 'database': str(DB)}, indent=2), flush=True)


def collect(db, rows, output, failures, abnormal, log):
    now = int(time.time())
    with db:
        for address, _, _, _ in rows:
            path = output / f'0x{address:08X}.c'
            if path.is_file() and path.stat().st_size:
                data = path.read_bytes()
                flags = quality(data.decode('utf-8', 'replace'))
                state = 'review' if flags else 'seed_ready'
                db.execute('''UPDATE functions SET status=?,c_path=?,c_sha256=?,c_bytes=?,
                  quality_flags=?,error=NULL,updated_at=? WHERE address=?''',
                  (state, str(path), hashlib.sha256(data).hexdigest(), len(data),
                   json.dumps(flags), now, address))
            elif address in failures or abnormal:
                error = failures.get(address, f'Ghidra exited abnormally; see {log}')
                db.execute('UPDATE functions SET status=\'failed\',error=?,updated_at=? WHERE address=?',
                           (error, now, address))


def run_batch(db, rows, route, number):
    output = STATE / 'c' / route
    output.mkdir(parents=True, exist_ok=True)
    manifest = STATE / 'batches' / f'{route}-{number:05d}.txt'
    manifest.parent.mkdir(parents=True, exist_ok=True)
    manifest.write_text(''.join(f'0x{a:08X} {s}\n' for a, s, _, _ in rows))
    log = STATE / 'logs' / f'{route}-{number:05d}.log'
    log.parent.mkdir(parents=True, exist_ok=True)
    project = (LAB / 'analysis-xenon', 'KinectSportsXenonRaw') if route == 'xenon' else (LAB / 'analysis', 'KinectSports')
    options = ['--mask-save-helper-calls']
    if route == 'scalar':
        options += ['--type-known-crt', '--type-sport-selector']
    command = [str(GHIDRA / 'support/analyzeHeadless'), str(project[0]), project[1],
               '-process', 'default.xex', '-readOnly', '-noanalysis', '-scriptPath', str(ROOT / 'tools'),
               '-postScript', 'DecompileBatch.java', str(manifest), str(output), *options]
    with db:
        db.executemany('UPDATE functions SET attempts=attempts+1 WHERE address=?',
                       [(row[0],) for row in rows])
    start = time.monotonic()
    try:
        with log.open('wb') as stream:
            result = subprocess.run(command, stdout=stream, stderr=subprocess.STDOUT, timeout=3600)
        exit_code = result.returncode
    except subprocess.TimeoutExpired:
        exit_code = 124
    failure_path = output / 'failures.txt'
    failures = read_failures(failure_path)
    collect(db, rows, output, failures, exit_code != 0, log)
    print(json.dumps({'route': route, 'batch': number, 'requested': len(rows),
                      'exit_code': exit_code, 'seconds': round(time.monotonic() - start, 1),
                      'log': str(log)}), flush=True)
    return exit_code


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['prepare', 'run', 'status'])
    parser.add_argument('--batch-size', type=int, default=200)
    parser.add_argument('--limit', type=int)
    parser.add_argument('--addresses', help='Comma-separated hexadecimal addresses for a trial')
    parser.add_argument('--retry-failed', action='store_true')
    parser.add_argument('--route', choices=['scalar', 'xenon'],
                        help='Process one independent Ghidra project')
    args = parser.parse_args()
    if not 1 <= args.batch_size <= 1000:
        parser.error('--batch-size must be 1..1000')
    db = connect()
    if args.action == 'prepare':
        prepare(db)
    elif args.action == 'status':
        status(db)
    else:
        lock_name = f'{args.route}.lock' if args.route else 'run.lock'
        with (STATE / lock_name).open('w') as lock:
            fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
            wanted = {int(a, 16) for a in args.addresses.split(',')} if args.addresses else None
            states = "('pending','failed')" if args.retry_failed else "('pending')"
            number = int(time.time())
            remaining_limit = args.limit
            while True:
                rows = db.execute(f'''SELECT address,size,symbol,route FROM functions
                    WHERE status IN {states} AND attempts<3
                    ORDER BY CASE WHEN status='pending' THEN 0 ELSE 1 END,
                    size,address''').fetchall()
                if args.route:
                    rows = [row for row in rows if row[3] == args.route]
                if wanted is not None:
                    rows = [row for row in rows if row[0] in wanted]
                if remaining_limit is not None:
                    rows = rows[:remaining_limit]
                if not rows:
                    break
                for route in ((args.route,) if args.route else ('scalar', 'xenon')):
                    selected = [row for row in rows if row[3] == route]
                    for offset in range(0, len(selected), args.batch_size):
                        batch = selected[offset:offset + args.batch_size]
                        code = run_batch(db, batch, route, number)
                        number += 1
                        if remaining_limit is not None:
                            remaining_limit -= len(batch)
                        if code:
                            status(db)
                            return 1
                if remaining_limit is not None and remaining_limit <= 0:
                    break
            status(db)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
