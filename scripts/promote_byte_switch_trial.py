#!/usr/bin/env python3
"""Record the validated 0x8236FB68 byte-switch boundary repair in the ledger."""
import hashlib
import json
from pathlib import Path
import sqlite3
import time

from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
C = LAB / 'analysis/switch-trials/overridden-xenon.c'
START = 0x8236FB68
END = 0x8236FD8C


def main():
    data = C.read_bytes()
    code = data.decode('utf-8')
    if 'switch(param_1)' not in code or code.count('case ') < 40:
        raise SystemExit('Switch trial is incomplete; refusing to promote')
    db = sqlite3.connect(DB)
    rows = db.execute('SELECT address,status FROM functions WHERE address>=? AND address<? ORDER BY address',
                      (START, END)).fetchall()
    if not rows or rows[0][0] != START:
        raise SystemExit('Missing parent function in ledger')
    now = int(time.time())
    with db:
        db.execute('''UPDATE functions SET status='review',c_path=?,c_sha256=?,c_bytes=?,
          quality_flags=?,error=NULL,updated_at=? WHERE address=?''',
          (str(C), hashlib.sha256(data).hexdigest(), len(data),
           json.dumps(['manual_switch_override', 'jeff_boundary_merge_pending']), now, START))
        for address, _ in rows[1:]:
            db.execute('''UPDATE functions SET status='fragment',quality_flags=?,error=?,updated_at=?
              WHERE address=?''',
              (json.dumps(['part_of_8236FB68']), 'Jeff split lies within a validated byte-switch body',
               now, address))
    print(json.dumps({'parent': f'0x{START:08X}', 'case_entries': code.count('case '),
                      'fragment_rows': len(rows) - 1, 'c_path': str(C)}))


if __name__ == '__main__':
    main()
