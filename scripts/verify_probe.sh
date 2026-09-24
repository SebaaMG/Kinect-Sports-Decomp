#!/usr/bin/env bash
# End-to-end build and objdiff check for the first reconstructed function.
set -euo pipefail
root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source "$root/scripts/lab-root.sh"
objdiff="${OBJDIFF_CLI:-objdiff-cli}"
out="$lab_root/compiler-probe/ninja-diff.json"
cd "$root"
ninja build/4D5308C9/src/compiler_probe/add.obj
"$objdiff" diff \
  -1 build/4D5308C9/obj/compiler_probe/add.obj \
  -2 build/4D5308C9/src/compiler_probe/add.obj \
  -o "$out" --format json fn_82FA5958
python3 - "$out" <<'PY'
import json
import sqlite3
import sys
import time
from pathlib import Path
with open(sys.argv[1], encoding="utf-8") as source:
    report = json.load(source)
symbols = report["left"]["symbols"]
match = next(item["match_percent"] for item in symbols if item["name"] == "fn_82FA5958")
print(f"0x82FA5958: {match:.1f}% code match")
if match != 100.0:
    raise SystemExit(1)
database = Path(sys.argv[1]).parent.parent / "analysis/full-game-export/progress.sqlite"
if database.is_file():
    with sqlite3.connect(database) as db:
        db.execute('''CREATE TABLE IF NOT EXISTS match_evidence (
          address INTEGER PRIMARY KEY, code_match_percent REAL NOT NULL,
          compiler TEXT NOT NULL, flags TEXT NOT NULL, evidence_path TEXT NOT NULL,
          verified_at INTEGER NOT NULL)''')
        db.execute('''INSERT OR REPLACE INTO match_evidence
          (address,code_match_percent,compiler,flags,evidence_path,verified_at)
          VALUES (?,?,?,?,?,?)''',
          (0x82FA5958, match, 'X360/16.00.10224.00', '/O2',
           str(Path(sys.argv[1]).resolve()), int(time.time())))
        db.execute('UPDATE functions SET match_percent=? WHERE address=?',
                   (match, 0x82FA5958))
PY
