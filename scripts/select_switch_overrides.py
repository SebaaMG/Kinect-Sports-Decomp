#!/usr/bin/env python3
"""Select validated tables that Ghidra missed inside an intact Jeff function."""
import json
from pathlib import Path
import sqlite3

from lab_paths import LAB
BASE = LAB / 'analysis/full-game-export'
OUT = {route: BASE / f'switch-overrides-{route}-v1.txt'
       for route in ('scalar', 'xenon')}


def main():
    db = sqlite3.connect(BASE / 'progress.sqlite')
    candidates = json.loads((BASE / 'validated-relative-switches.json').read_text())
    selected = []
    for item in candidates:
        address = int(item['jeff_range_start'], 16)
        branch = int(item['branch'], 16)
        row = db.execute('SELECT size,status,c_path,route FROM functions WHERE address=?',
                         (address,)).fetchone()
        if not row or row[1] != 'review' or not row[2]:
            continue
        size, _, c_path, _ = row
        targets = [int(value, 16) for value in item['targets']]
        if not all(address <= value < address + size for value in targets):
            continue
        code = Path(c_path).read_text(errors='replace')
        if 'switch(' in code or 'Could not recover jumptable' not in code:
            continue
        selected.append((address, size, branch, targets, row[3]))
    if len({row[0] for row in selected}) != len(selected):
        raise RuntimeError('Multiple unresolved tables in one function require manual review')
    for route, path in OUT.items():
        path.write_text(''.join(
            f'0x{address:08X} {size} 0x{branch:08X} ' +
            ','.join(f'0x{target:08X}' for target in targets) + '\n'
            for address, size, branch, targets, item_route in selected
            if item_route == route))
    print(json.dumps({'selected': len(selected),
                      'by_route': {route: sum(row[4] == route for row in selected)
                                   for route in OUT},
                      'outputs': {route: str(path) for route, path in OUT.items()}}, indent=2))


if __name__ == '__main__':
    main()
