#!/usr/bin/env python3
"""Register verified-control-flow switch C as a private seed overlay."""
import hashlib
import argparse
import json
from pathlib import Path
import sqlite3
import time

from lab_paths import LAB
BASE = LAB / 'analysis/full-game-export'
def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--route', choices=['scalar', 'xenon'], required=True)
    args = parser.parse_args()
    manifest = BASE / f'switch-overrides-{args.route}-v1.txt'
    source = LAB / ('analysis/switch-revision-trial' if args.route == 'scalar'
                    else 'analysis/switch-revision-xenon-trial')
    out = BASE / 'revisions' / f'{args.route}-switch-v1'
    out.mkdir(parents=True, exist_ok=True)
    db = sqlite3.connect(out / 'progress.sqlite')
    db.execute('''CREATE TABLE IF NOT EXISTS functions (
      address INTEGER PRIMARY KEY, status TEXT NOT NULL, c_path TEXT,
      c_sha256 TEXT, c_bytes INTEGER, case_count INTEGER, updated_at INTEGER)''')
    promoted = []
    allowed = {int(line.split()[0], 16) for line in manifest.read_text().splitlines()}
    for line in manifest.read_text().splitlines():
        address = int(line.split()[0], 16)
        targets = {int(value, 16) for value in line.split()[3].split(',')}
        path = source / f'0x{address:08X}.c'
        data = path.read_bytes()
        code = data.decode('utf-8', 'replace')
        cases = code.count('case ')
        labels = cases + code.count('default:')
        implicit_exit = (args.route == 'xenon' and address == 0x82266628 and
                         '*(undefined4 *)(param_1 + 0x52c) = param_2;' in code)
        if labels + int(implicit_exit) < len(targets) or 'Could not recover jumptable' in code:
            raise RuntimeError(f'Switch C has incomplete cases at 0x{address:08X}')
        promoted.append((address, 'exported', str(path), hashlib.sha256(data).hexdigest(),
                         len(data), cases, int(time.time())))
    with db:
        db.execute('DELETE FROM functions WHERE address NOT IN (' +
                   ','.join('?' for _ in allowed) + ')', tuple(sorted(allowed)))
        db.executemany('''INSERT OR REPLACE INTO functions
          (address,status,c_path,c_sha256,c_bytes,case_count,updated_at)
          VALUES (?,?,?,?,?,?,?)''', promoted)
    metadata = {'source_manifest': str(manifest),
                'source_manifest_sha256': hashlib.sha256(manifest.read_bytes()).hexdigest(),
                'override_script': 'DecompileBatch.java --switch-overrides',
                'implicit_exit_cases': ['0x82266628'] if args.route == 'xenon' else [],
                'cases': {f'0x{row[0]:08X}': row[5] for row in promoted}}
    (out / 'metadata.json').write_text(json.dumps(metadata, indent=2) + '\n')
    print(json.dumps({'promoted': len(promoted), 'database': str(out / 'progress.sqlite')}, indent=2))


if __name__ == '__main__':
    main()
