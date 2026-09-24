#!/usr/bin/env bash
set -euo pipefail
root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source "$root/scripts/lab-root.sh"
ghidra_root="${GHIDRA_ROOT:-$lab_root/tools/ghidra_12.1.3_PUBLIC}"
limit="${1:-20}"
if [[ ! $limit =~ ^[0-9]+$ || $limit -lt 1 || $limit -gt 111 ]]; then
  echo 'Uso: scripts/decompile_boxing.sh [1..111]' >&2
  exit 2
fi
list="$lab_root/analysis/boxing-addresses.txt"
out="$lab_root/analysis/boxing-c"
python3 - "$root/build/4D5308C9/boxing_candidates.json" "$list" "$limit" "$lab_root/agents/boxing-tasks/index.json" <<'PY'
import json
import sys
from pathlib import Path
items = json.loads(Path(sys.argv[1]).read_text(encoding="utf-8"))
sizes = {item["address"]: item["size"] for item in json.loads(Path(sys.argv[4]).read_text(encoding="utf-8"))}
Path(sys.argv[2]).write_text("\n".join(f'{item["address"]} {sizes[item["address"]]}' for item in items[:int(sys.argv[3])]) + "\n", encoding="utf-8")
PY
"$ghidra_root/support/analyzeHeadless" "$lab_root/analysis" KinectSports \
  -process default.xex -readOnly -noanalysis -scriptPath "$root/tools" \
  -postScript DecompileBatch.java "$list" "$out" --mask-save-helper-calls \
    --type-known-crt --type-sport-selector 2>&1 \
  | rg 'BATCH_DONE=|ERROR Abort due to Headless analyzer error:'
