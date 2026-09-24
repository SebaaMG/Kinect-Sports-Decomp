#!/usr/bin/env python3
"""Record two tentative Jeff-boundary merges as review-only C seeds."""
import hashlib
import json
from pathlib import Path
import sqlite3
import time

from lab_paths import LAB
BASE = LAB / 'analysis/full-game-export'
MANIFEST = BASE / 'switch-merge-trial.txt'
SOURCE = LAB / 'analysis/switch-merge-trial'
OUT = BASE / 'revisions/scalar-switch-merge-v1'


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    db = sqlite3.connect(OUT / 'progress.sqlite')
    db.execute('''CREATE TABLE IF NOT EXISTS functions (
      address INTEGER PRIMARY KEY, status TEXT NOT NULL, c_path TEXT,
      c_sha256 TEXT, c_bytes INTEGER, merged_size INTEGER,
      case_count INTEGER, updated_at INTEGER)''')
    selected = []
    for line in MANIFEST.read_text().splitlines():
        address_text, size_text, _, target_text = line.split()
        address, size = int(address_text, 16), int(size_text)
        targets = set(target_text.split(','))
        path = SOURCE / f'0x{address:08X}.c'
        data = path.read_bytes()
        code = data.decode('utf-8', 'replace')
        cases = code.count('case ')
        if cases < len(targets) - 1 or 'Could not recover jumptable' in code:
            raise RuntimeError(f'Incomplete merged switch at 0x{address:08X}')
        selected.append((address, 'exported', str(path), hashlib.sha256(data).hexdigest(),
                         len(data), size, cases, int(time.time())))
    with db:
        db.executemany('''INSERT OR REPLACE INTO functions
          (address,status,c_path,c_sha256,c_bytes,merged_size,case_count,updated_at)
          VALUES (?,?,?,?,?,?,?,?)''', selected)
    metadata = {'source_manifest': str(MANIFEST),
                'source_manifest_sha256': hashlib.sha256(MANIFEST.read_bytes()).hexdigest(),
                'status': 'boundary_review',
                'note': 'Merged source ranges have no observed external direct calls to fragments; boundary still unverified.'}
    (OUT / 'metadata.json').write_text(json.dumps(metadata, indent=2) + '\n')
    print(json.dumps({'review_seeds': len(selected), 'database': str(OUT / 'progress.sqlite')}))


if __name__ == '__main__':
    main()
