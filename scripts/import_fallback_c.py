#!/usr/bin/env python3
"""Store conservative Ghidra containing-function C for boundary conflicts."""
import hashlib
import json
from pathlib import Path
import re
import sqlite3
import time

from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
ROOT = LAB / 'analysis/full-game-export/c/fallback'
PATTERN = re.compile(r'requested=([0-9a-f]+) containing_function=([0-9a-f]+)')


def main():
    db = sqlite3.connect(DB)
    accepted = 0
    rejected = 0
    with db:
        for meta in ROOT.glob('*.meta.txt'):
            match = PATTERN.search(meta.read_text())
            if not match:
                rejected += 1
                continue
            address, parent = int(match[1], 16), int(match[2], 16)
            row = db.execute('SELECT status FROM functions WHERE address=?', (address,)).fetchone()
            c = ROOT / (meta.name.removesuffix('.meta.txt') + '.c')
            if row is None or row[0] != 'failed' or parent > address or not c.is_file():
                rejected += 1
                continue
            data = c.read_bytes()
            if len(data) < 25:
                rejected += 1
                continue
            db.execute('''UPDATE functions SET status='boundary_review',c_path=?,
              c_sha256=?,c_bytes=?,quality_flags=?,error=?,updated_at=? WHERE address=?''',
              (str(c), hashlib.sha256(data).hexdigest(), len(data),
               json.dumps(['fallback_containing_function', 'jeff_boundary_conflict']),
               f'Ghidra containing function starts at 0x{parent:08X}; validate Jeff boundary',
               int(time.time()), address))
            accepted += 1
    print(json.dumps({'boundary_review': accepted, 'rejected': rejected}))


if __name__ == '__main__':
    main()
