#!/usr/bin/env python3
"""Run the Ghidra C codegen optimizer over an entire Jeff function manifest.

Results are durable per address. Batches that time out are split so a large
function cannot prevent the rest of the game from being measured.
"""

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--repo', type=Path, required=True)
    parser.add_argument('--manifest', type=Path, required=True)
    parser.add_argument('--objects-root', type=Path, required=True)
    parser.add_argument('--source-root', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--compiler', type=Path, required=True)
    parser.add_argument('--wibo', required=True)
    parser.add_argument('--objdiff', required=True)
    parser.add_argument('--jobs', type=int, default=26)
    parser.add_argument('--chunk-size', type=int, default=26)
    parser.add_argument('--small-timeout', type=int, default=900)
    parser.add_argument('--large-timeout', type=int, default=1800)
    parser.add_argument('--allow-subset', action='store_true',
                        help='run a targeted manifest from a prior full-game audit')
    args = parser.parse_args()
    args.repo = args.repo.resolve()
    args.output.mkdir(parents=True, exist_ok=True)
    compiler_hash = sha(args.compiler)
    config = json.loads((args.repo / 'config/4D5308C9/objects.json').read_text())['game']['objects']
    input_rows = [json.loads(line) for line in args.manifest.read_text().splitlines() if line.strip()]
    if len(input_rows) < 50000 and not args.allow_subset:
        parser.error('expected the full-game Jeff manifest (at least 50,000 functions)')
    counts = Counter()
    pending = []
    for row in input_rows:
        stem = f'{int(row["stem"], 16):08X}'
        source = args.repo / 'src/auto_match' / f'func_{stem}.c'
        if not source.is_file() and args.source_root:
            source = args.source_root / f'func_{stem}.c'
        target = args.objects_root / 'obj/auto_match' / f'func_{stem}.obj'
        entry = config.get(f'auto_match/func_{stem}.c', 'MISSING')
        if isinstance(entry, dict) and entry.get('status') == 'Matching':
            counts['already_matching'] += 1
        elif not source.is_file():
            counts['missing_source'] += 1
        elif not target.is_file():
            counts['missing_original_object'] += 1
        else:
            result_dir = args.output / stem
            result_file = result_dir / 'result.json'
            if result_file.is_file():
                try:
                    result = json.loads(result_file.read_text())
                    flags = (entry.get('extra_cflags', ['/O1']) if isinstance(entry, dict)
                             else ['/O1'])
                    if (result.get('source_sha256') == sha(source) and
                            result.get('target_sha256') == sha(target) and
                            result.get('compiler_sha256') == compiler_hash and
                            result.get('baseline', {}).get('cflags') == flags and
                            all((result_dir / name).is_file() for name in
                                ('candidate.c', 'candidate.obj', 'diff.json'))):
                        counts['cached_verified'] += 1
                        continue
                except (OSError, ValueError, KeyError):
                    pass
            pending.append((stem, source.stat().st_size))
    print(json.dumps({'inventory': dict(counts), 'pending': len(pending)}), flush=True)
    (args.output / 'sweep-inventory.json').write_text(json.dumps({
        'manifest': str(args.manifest), 'total': len(input_rows),
        'inventory': dict(counts), 'pending': len(pending)}, indent=2) + '\n')

    optimizer = Path(__file__).with_name('optimize_ghidra_c.py')
    run_counts = Counter()
    with tempfile.TemporaryDirectory(prefix='kinect-sweep-') as temp:
        temp_dir = Path(temp)
        batch_number = 0

        def run_batch(batch):
            nonlocal batch_number
            batch_number += 1
            name = f'{batch_number:05d}-{len(batch)}'
            manifest = temp_dir / f'{name}.jsonl'
            manifest.write_text(''.join(json.dumps({'stem': stem}) + '\n' for stem, _ in batch))
            command = [sys.executable, str(optimizer), '--repo', str(args.repo),
                       '--objects-root', str(args.objects_root), '--output', str(args.output),
                       '--compiler', str(args.compiler), '--wibo', args.wibo,
                       '--objdiff', args.objdiff, '--manifest', str(manifest),
                       '--jobs', str(min(args.jobs, len(batch))), '--resume-verified']
            if args.source_root:
                command += ['--source-root', str(args.source_root)]
            timeout = (args.large_timeout if any(size > 20000 for _, size in batch)
                       else args.small_timeout)
            try:
                result = subprocess.run(command, capture_output=True, text=True,
                                        timeout=timeout)
                if result.returncode:
                    raise RuntimeError(result.stderr[-1000:] or result.stdout[-1000:])
                summary = json.loads(result.stdout.splitlines()[-1])
                run_counts.update(summary.get('status_counts', {}))
                run_counts['processed'] += len(batch)
                run_counts['new_exact'] += summary.get('new_exact', 0)
                run_counts['improved'] += summary.get('improved', 0)
                print(json.dumps({'batch': name, 'summary': summary,
                                  'progress': run_counts['processed']}), flush=True)
            except (subprocess.TimeoutExpired, RuntimeError, ValueError) as error:
                if len(batch) == 1:
                    run_counts['timed_out_or_failed'] += 1
                    print(json.dumps({'batch': name, 'address': batch[0][0],
                                      'error': str(error)[-300:]}), flush=True)
                else:
                    print(json.dumps({'split': name, 'error': str(error)[-200:]}),
                          flush=True)
                    middle = len(batch) // 2
                    run_batch(batch[:middle])
                    run_batch(batch[middle:])

        small = [item for item in pending if item[1] <= 20000]
        large = [item for item in pending if item[1] > 20000]
        for index in range(0, len(small), args.chunk_size):
            run_batch(small[index:index + args.chunk_size])
        for index in range(0, len(large), 8):
            run_batch(large[index:index + 8])
    summary = {'total': len(input_rows), 'inventory': dict(counts),
               'pending': len(pending), 'run': dict(run_counts)}
    (args.output / 'sweep-summary.json').write_text(json.dumps(summary, indent=2) + '\n')
    print(json.dumps(summary), flush=True)


if __name__ == '__main__':
    main()
