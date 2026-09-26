#!/usr/bin/env bash
# Refresh the public objdiff report from a local build with the original game.
set -euo pipefail
cd "$(dirname "$0")/.."
ninja build/4D5308C9/report.json
python3 - <<'PY'
import json
from pathlib import Path
import re

source = Path("build/4D5308C9/report.json")
report = json.loads(source.read_text(encoding="utf-8"))
measures = report["measures"]
if int(measures["total_code"]) <= 0 or not report.get("units"):
    raise SystemExit("objdiff report has no target code or units")
destination = Path("progress/report.json")
destination.parent.mkdir(exist_ok=True)
destination.write_bytes(source.read_bytes())
readme = Path("README.md")
body = readme.read_text(encoding="utf-8")
matched_functions = int(measures["matched_functions"])
matched_code = int(measures["matched_code"])
total_code = int(measures["total_code"])
fuzzy = float(measures["fuzzy_match_percent"])
sourced_units = sum(1 for u in report.get("units", [])
                    if u.get("metadata", {}).get("source_path"))
body, function_rows = re.subn(
    r"(?m)^\| Code matches verified with objdiff \| .* \|$",
    f"| Code matches verified with objdiff | {matched_functions} |", body)
body, byte_rows = re.subn(
    r"(?m)^\| Matched code bytes in target objects \| .* \|$",
    f"| Matched code bytes in target objects | {matched_code:,} / {total_code:,} "
    f"({matched_code / total_code * 100:.5f}%) |", body)
body, units_rows = re.subn(
    r"(?m)^\| Units with reconstructed source \| .* \|$",
    f"| Units with reconstructed source | {sourced_units:,} |", body)
body, fuzzy_rows = re.subn(
    r"(?m)^\| Fuzzy code match \(partial credit\) \| .* \|$",
    f"| Fuzzy code match (partial credit) | {fuzzy:.5f}% |", body)
if function_rows != 1 or byte_rows != 1 or units_rows != 1 or fuzzy_rows != 1:
    raise SystemExit("README progress table format changed")
readme.write_text(body, encoding="utf-8")
print(f"{destination}: {measures.get('matched_code', '0')} / {measures['total_code']} code bytes matched")
PY
