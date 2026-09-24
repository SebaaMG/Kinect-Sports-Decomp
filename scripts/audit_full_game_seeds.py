#!/usr/bin/env python3
"""Classify exported C warnings and suspiciously short Jeff-sized bodies."""
import hashlib
import json
from pathlib import Path
import re
import sqlite3

from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
MARKERS = (
    ('halt_baddata', 'bad_data'),
    ('UNDECODED', 'undecoded'),
    ('Could not recover jumptable', 'indirect_branch_unresolved'),
    ('Treating indirect jump as call', 'indirect_jump_as_call'),
    ('Switch is manually overridden', 'manual_switch_override'),
    ('vectorConditionalSelect', 'vector_userop'),
    ('loadVectorLeftIndexed128', 'vector_userop'),
)
VECTOR_USEROP = re.compile(r'\bvector[A-Z]\w*\s*\(')


def main():
    db = sqlite3.connect(DB)
    rows = db.execute("SELECT address,size,status,c_path,c_sha256 FROM functions WHERE c_path IS NOT NULL").fetchall()
    changes = []
    for address, size, status, name, expected_hash in rows:
        path = Path(name)
        if not path.is_file():
            changes.append(('missing_output', json.dumps(['missing_output']), address))
            continue
        data = path.read_bytes()
        if expected_hash and hashlib.sha256(data).hexdigest() != expected_hash:
            changes.append(('review', json.dumps(['hash_mismatch']), address))
            continue
        code = data.decode('utf-8', 'replace')
        flags = {flag for marker, flag in MARKERS if marker in code}
        if VECTOR_USEROP.search(code):
            flags.add('vector_userop')
        flags = sorted(flags)
        if size >= 128 and len(code) < 100:
            flags.append('suspiciously_short_c')
        if size >= 2048 and len(code) < 250:
            flags.append('very_short_large_function')
        if len(code.strip()) < 25:
            flags.append('very_short_c')
        if status in ('fragment', 'boundary_review'):
            continue
        new_status = 'review' if flags else 'seed_ready'
        changes.append((new_status, json.dumps(flags), address))
    with db:
        db.executemany('UPDATE functions SET status=?,quality_flags=? WHERE address=?', changes)
    counts = dict(db.execute('SELECT status,COUNT(*) FROM functions GROUP BY status'))
    print(json.dumps({'audited': len(rows), 'status': counts}, indent=2))


if __name__ == '__main__':
    main()
