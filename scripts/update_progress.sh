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
complete_code = int(measures["complete_code"])
total_code = int(measures["total_code"])
fuzzy = float(measures["fuzzy_match_percent"])
sourced_units = sum(1 for u in report.get("units", [])
                    if u.get("metadata", {}).get("source_path"))
body, function_rows = re.subn(
    r"(?m)^\| Functions with matching code \| .* \|$",
    f"| Functions with matching code | {matched_functions:,} |", body)
body, byte_rows = re.subn(
    r"(?m)^\| Matched code \| .* \|$",
    f"| Matched code | {matched_code:,} / {total_code:,} "
    f"({matched_code / total_code * 100:.5f}%) |", body)
body, linked_rows = re.subn(
    r"(?m)^\| Fully linked code \| .* \|$",
    f"| Fully linked code | {complete_code:,} / {total_code:,} "
    f"({complete_code / total_code * 100:.5f}%) |", body)
body, units_rows = re.subn(
    r"(?m)^\| Units with source \| .* \|$",
    f"| Units with source | {sourced_units:,} |", body)
body, fuzzy_rows = re.subn(
    r"(?m)^\| Fuzzy match \| .* \|$",
    f"| Fuzzy match | {fuzzy:.5f}% |", body)
if any(count != 1 for count in (function_rows, byte_rows, linked_rows, units_rows, fuzzy_rows)):
    raise SystemExit("README progress table format changed")
readme.write_text(body, encoding="utf-8")
print(f"{destination}: {measures.get('matched_code', '0')} / {measures['total_code']} code bytes matched")
PY
