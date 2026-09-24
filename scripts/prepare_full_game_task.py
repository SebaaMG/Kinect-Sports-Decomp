#!/usr/bin/env python3
"""Materialize one private, bounded C and assembly packet from the full-game ledger."""
import argparse
import json
from pathlib import Path
import shutil
import sqlite3
from seed_selection import SeedSelector
import tempfile

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('address', help='Jeff function address, e.g. 0x82400E48')
    args = parser.parse_args()
    address = int(args.address, 16)
    db = sqlite3.connect(DB)
    row = db.execute('''SELECT f.size,f.symbol,f.route,f.status,f.c_path,f.quality_flags,
      a.path,a.start_offset,a.end_offset
      FROM functions f LEFT JOIN assembly_ranges a ON a.address=f.address
      WHERE f.address=?''', (address,)).fetchone()
    if row is None:
        parser.error(f'Address 0x{address:08X} is not indexed')
    size, symbol, route, state, c_path, flags, asm_path, start, end = row
    if state not in ('seed_ready', 'review') or not c_path or not asm_path:
        parser.error(f'Address 0x{address:08X} has no agent-ready seed: {state}')
    seed = SeedSelector().choose(address, size, route, state, c_path, flags)
    stem = f'{address:08X}'
    target = ROOT / 'build/4D5308C9/obj/auto_match' / f'func_{stem}.obj'
    if address == 0x82FA5958:
        target = ROOT / 'build/4D5308C9/obj/compiler_probe/add.obj'
    task_root = LAB / 'agents/full-game-tasks' / stem
    task_root.mkdir(parents=True, exist_ok=True)
    work = Path(tempfile.mkdtemp(prefix='task-', dir=task_root))
    isolated_asm = ROOT / 'build/4D5308C9/asm/auto_match' / f'func_{stem}.s'
    if isolated_asm.is_file():
        assembly = isolated_asm.read_bytes()
    else:
        with Path(asm_path).open('rb') as stream:
            stream.seek(start)
            assembly = stream.read(end - start)
    if not assembly.strip() or f'/* {stem}'.encode() not in assembly:
        raise RuntimeError(f'Assembly for 0x{stem} is absent or its indexed offsets are stale; regenerate splits')
    (work / 'original.s').write_bytes(assembly)
    shutil.copyfile(seed['path'], work / 'ghidra.c')
    fid = db.execute('SELECT fid_name,score,library,match_count FROM fid_candidates WHERE address=?',
                     (address,)).fetchone()
    packet = {
        'address': f'0x{stem}', 'size': size, 'jeff_symbol': symbol,
        'decompiler_route': route, 'seed_status': seed['status'],
        'seed_revision': seed['revision'], 'seed_source_sha256': seed['sha256'],
        'quality_flags': seed['quality_flags'],
        'fid_hint': ({'name': fid[0], 'score': fid[1], 'library': fid[2],
                      'candidate_count': fid[3]} if fid else None),
        'original_assembly': str(work / 'original.s'),
        'ghidra_c': str(work / 'ghidra.c'),
        'target_object': str(target) if target.is_file() else None,
        'isolation_required': not target.is_file(),
        'isolation_command': ['python3', str(ROOT / 'scripts/isolate_functions.py'), f'0x{stem}']
                             if not target.is_file() else None,
        'candidate_path': str(work / 'candidate.c'),
        'evaluation_command': ['python3', str(ROOT / 'scripts/evaluate_candidate.py'),
                               f'0x{stem}', str(work / 'candidate.c'),
                               '--cflags', '/nologo', '/c', '/TC', '/O1'],
        'match_percent': None,
        'completion_rule': 'Compile and verify with objdiff; C seed and FID name are hypotheses.',
    }
    path = work / 'task.json'
    path.write_text(json.dumps(packet, indent=2) + '\n')
    print(path)


if __name__ == '__main__':
    main()
