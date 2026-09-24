#!/usr/bin/env python3
"""Select bounded, unverified functions from the private full-game C inventory."""
import argparse
import json
from pathlib import Path
import sqlite3
from seed_selection import SeedSelector

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--count', type=int, default=20)
    parser.add_argument('--route', choices=['scalar', 'xenon'])
    parser.add_argument('--order', choices=['small', 'large'], default='small')
    parser.add_argument('--min-size', type=int, default=16)
    parser.add_argument('--max-size', type=int, default=4096)
    args = parser.parse_args()
    if not 1 <= args.count <= 1000 or args.min_size < 4 or args.max_size < args.min_size:
        parser.error('count must be 1..1000 and size bounds must be valid')
    db = sqlite3.connect(DB)
    selector = SeedSelector()
    query = '''SELECT address,size,symbol,route,status,c_path,quality_flags FROM functions
      WHERE status IN ('seed_ready','review') AND match_percent IS NULL AND size BETWEEN ? AND ?'''
    params = [args.min_size, args.max_size]
    if args.route:
        query += ' AND route=?'
        params.append(args.route)
    query += ' ORDER BY size ' + ('ASC' if args.order == 'small' else 'DESC') + ',address LIMIT ?'
    params.append(args.count)
    tasks = []
    for address, size, symbol, route, status, c_path, flags in db.execute(query, params):
        seed = selector.choose(address, size, route, status, c_path, flags)
        stem = f'{address:08X}'
        original = ROOT / 'build/4D5308C9/obj/auto_match' / f'func_{stem}.obj'
        fid = db.execute('SELECT fid_name,score,library,match_count FROM fid_candidates WHERE address=?',
                         (address,)).fetchone()
        tasks.append({'address': f'0x{stem}', 'size': size, 'jeff_symbol': symbol,
                      'route': route, 'seed_status': seed['status'],
                      'seed_revision': seed['revision'],
                      'quality_flags': seed['quality_flags'],
                      'fid_hint': ({'name': fid[0], 'score': fid[1], 'library': fid[2],
                                    'candidate_count': fid[3]} if fid else None),
                      'ghidra_c': seed['path'], 'original_object': str(original) if original.is_file() else None,
                      'isolation_required': not original.is_file(), 'match_percent': None})
    print(json.dumps(tasks, indent=2))


if __name__ == '__main__':
    main()
