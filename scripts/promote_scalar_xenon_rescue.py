#!/usr/bin/env python3
"""Record bounded scalar functions rescued by the patched Xenon language."""
import hashlib
import json
from pathlib import Path
import sqlite3
import time

from lab_paths import LAB
BASE = LAB / 'analysis/full-game-export'
MANIFEST = BASE / 'scalar-baddata-all.txt'
SOURCE = LAB / 'analysis/scalar-xenon-rescue-all'
REVISION = BASE / 'revisions/xenon-alias-addsub-v1/progress.sqlite'


def main():
    selected = []
    for line in MANIFEST.read_text().splitlines():
        address_text, size_text = line.split()
        address, size = int(address_text, 16), int(size_text)
        if size < 64:
            continue
        path = SOURCE / f'0x{address:08X}.c'
        if not path.is_file():
            continue
        data = path.read_bytes()
        code = data.decode('utf-8', 'replace')
        if 'halt_baddata' in code or 'UNDECODED' in code or len(code) < 100:
            continue
        selected.append((address, size, 'exported', 1, str(path),
                         hashlib.sha256(data).hexdigest(), len(data), None, int(time.time())))
    with sqlite3.connect(REVISION) as db:
        db.executemany('''INSERT OR REPLACE INTO functions
          (address,size,status,attempts,c_path,c_sha256,c_bytes,error,updated_at)
          VALUES (?,?,?,?,?,?,?,?,?)''', selected)
    print(json.dumps({'promoted_scalar_rescues': len(selected),
                      'addresses': [f'0x{row[0]:08X}' for row in selected]}))


if __name__ == '__main__':
    main()
