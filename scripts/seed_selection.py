"""Select a verified-on-disk C seed revision for a Jeff function."""
import hashlib
import json
from pathlib import Path
import re
import sqlite3

from lab_paths import LAB
ROOT = LAB / 'analysis/full-game-export/revisions'
REVISIONS = {'scalar': ('scalar-switch-merge-v1', 'scalar-switch-v1',
                        'xenon-alias-addsub-v1', 'scalar-crt-v1'),
             'xenon': ('xenon-switch-v1', 'xenon-altivec-v2',
                       'xenon-alias-addsub-v1')}
MARKERS = (
    ('halt_baddata', 'bad_data'),
    ('UNDECODED', 'undecoded'),
    ('Could not recover jumptable', 'indirect_branch_unresolved'),
    ('Treating indirect jump as call', 'indirect_jump_as_call'),
    ('vectorConditionalSelect', 'vector_userop'),
    ('loadVectorLeftIndexed128', 'vector_userop'),
    ('Ram00000000', 'zero_memory_reference'),
)
REGRESSION_MARKERS = ('halt_baddata', 'Ram00000000', 'UNDECODED',
                      'Could not recover jumptable')
VECTOR_USEROP = re.compile(r'\bvector[A-Z]\w*\s*\(')


class SeedSelector:
    def __init__(self):
        self.connections = {}

    def choose(self, address, size, route, base_status, base_path, base_flags):
        for name in REVISIONS[route]:
            database = ROOT / name / 'progress.sqlite'
            if not database.is_file():
                continue
            if name not in self.connections:
                self.connections[name] = sqlite3.connect(database)
            row = self.connections[name].execute(
                'SELECT status,c_path,c_sha256 FROM functions WHERE address=?',
                (address,)).fetchone()
            if row and row[0] == 'exported' and row[1]:
                path = Path(row[1])
                data = path.read_bytes()
                if hashlib.sha256(data).hexdigest() != row[2]:
                    raise ValueError(f'Seed revision hash mismatch at 0x{address:08X}')
                code = data.decode('utf-8', 'replace')
                if name == 'xenon-altivec-v2':
                    previous = self.connections.get('xenon-alias-addsub-v1')
                    if previous is None:
                        previous = sqlite3.connect(
                            ROOT / 'xenon-alias-addsub-v1' / 'progress.sqlite')
                        self.connections['xenon-alias-addsub-v1'] = previous
                    old = previous.execute(
                        'SELECT c_path FROM functions WHERE address=? AND status=\'exported\'',
                        (address,)).fetchone()
                    prior_path = old[0] if old else base_path
                    if prior_path and Path(prior_path).is_file():
                        prior_data = Path(prior_path).read_bytes()
                        prior = prior_data.decode('utf-8', 'replace')
                        if data == prior_data or any(
                                marker in code and marker not in prior
                                for marker in REGRESSION_MARKERS):
                            continue
                flags = {label for marker, label in MARKERS if marker in code}
                if VECTOR_USEROP.search(code):
                    flags.add('vector_userop')
                flags = sorted(flags)
                if size >= 128 and len(code) < 100:
                    flags.append('suspiciously_short_c')
                if size >= 2048 and len(code) < 250:
                    flags.append('very_short_large_function')
                if len(code.strip()) < 25:
                    flags.append('very_short_c')
                if name == 'scalar-switch-merge-v1':
                    flags.append('jeff_boundary_merge_unverified')
                if route == 'scalar' and name == 'xenon-alias-addsub-v1':
                    flags.append('xenon_route_rescue_unverified')
                return {'path': str(path), 'revision': name,
                        'status': 'review' if flags else 'seed_ready',
                        'quality_flags': flags, 'sha256': row[2]}
        return {'path': base_path, 'revision': 'baseline',
                'status': base_status, 'quality_flags': json.loads(base_flags or '[]'),
                'sha256': None}
