#!/usr/bin/env bash
# Refresh the public objdiff report from a local build with the original game.
set -euo pipefail
cd "$(dirname "$0")/.."
ninja build/4D5308C9/report.json
python3 - <<'PY'
import json
from pathlib import Path

source = Path("build/4D5308C9/report.json")
report = json.loads(source.read_text(encoding="utf-8"))
measures = report["measures"]
if int(measures["total_code"]) <= 0 or not report.get("units"):
    raise SystemExit("objdiff report has no target code or units")
destination = Path("progress/report.json")
destination.parent.mkdir(exist_ok=True)
destination.write_bytes(source.read_bytes())
print(f"{destination}: {measures.get('matched_code', '0')} / {measures['total_code']} code bytes matched")
PY
