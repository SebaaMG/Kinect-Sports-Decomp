#!/usr/bin/env python3
"""Audit revision hashes, effective seed quality, and changed C files."""
import collections
import hashlib
import json
from pathlib import Path
import sqlite3

from seed_selection import SeedSelector

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
BASE = LAB / 'analysis/full-game-export'
REVISIONS = ('xenon-stack-abi-v1', 'xenon-alias-addsub-v1', 'xenon-altivec-v2', 'scalar-crt-v1',
             'scalar-switch-v1', 'xenon-switch-v1', 'scalar-switch-merge-v1')


def digest(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def main():
    baseline = sqlite3.connect(BASE / 'progress.sqlite')
    report = {'revisions': {}, 'effective': {}, 'quality_flags': {}}
    for name in REVISIONS:
        path = BASE / 'revisions' / name / 'progress.sqlite'
        if not path.is_file():
            continue
        counts = collections.Counter()
        db = sqlite3.connect(path)
        for address, status, c_path, expected in db.execute(
                'SELECT address,status,c_path,c_sha256 FROM functions'):
            counts[status] += 1
            if status != 'exported':
                continue
            if digest(c_path) != expected:
                raise RuntimeError(f'Hash mismatch: {name} 0x{address:08X}')
            old_path = baseline.execute('SELECT c_path FROM functions WHERE address=?',
                                        (address,)).fetchone()[0]
            if old_path and Path(old_path).read_bytes() != Path(c_path).read_bytes():
                counts['changed_from_baseline'] += 1
        report['revisions'][name] = dict(counts)
    selector = SeedSelector()
    effective = collections.Counter()
    quality = collections.Counter()
    for address, size, route, status, path, flags in baseline.execute(
            'SELECT address,size,route,status,c_path,quality_flags FROM functions'):
        if status in ('seed_ready', 'review'):
            seed = selector.choose(address, size, route, status, path, flags)
            effective[seed['status']] += 1
            effective['revision:' + seed['revision']] += 1
            quality.update(seed['quality_flags'])
        else:
            effective[status] += 1
    report['effective'] = dict(effective)
    report['quality_flags'] = dict(quality)
    report['provenance'] = {
        'pe_sha256': digest(LAB / 'originals/kinect-sports-1/default.exe'),
        'xenon_patch_sha256': digest(ROOT / 'tools/xenon-register-alias.patch'),
        'altivec_patch_sha256': digest(ROOT / 'tools/xenon-altivec-semantics.patch'),
        'patched_sla_sha256': digest(LAB / 'tools/ghidra_12.1.3_xenon/Ghidra/Extensions/GhidraXenon/data/languages/ppc_64_xenon.sla'),
    }
    output = BASE / 'revision-audit.json'
    output.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'revisions': report['revisions'], 'effective': report['effective'],
                      'quality_flags': report['quality_flags'], 'output': str(output)}, indent=2))


if __name__ == '__main__':
    main()
