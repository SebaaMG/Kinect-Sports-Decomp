#!/usr/bin/env python3
"""Index Jeff functions containing Xbox 360 VMX128 instructions."""

import bisect
import json
import re
import subprocess
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
FUNCTION = re.compile(r"^([^ =]+) = \.text:0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)")
ADDRESS = re.compile(r"/\* ([0-9A-Fa-f]{8}) ")


def main() -> None:
    symbols = []
    for line in (ROOT / "config/4D5308C9/symbols.txt").open(encoding="utf-8"):
        match = FUNCTION.match(line)
        if match:
            symbols.append((int(match[2], 16), int(match[3], 16), match[1]))
    symbols.sort()
    starts = [item[0] for item in symbols]
    counts = Counter()
    process = subprocess.Popen(
        ["rg", "-n", r"\t[a-z0-9_]*128\b", str(ROOT / "build/4D5308C9/asm"), "-g", "*.s"],
        stdout=subprocess.PIPE, text=True,
    )
    assert process.stdout is not None
    for line in process.stdout:
        match = ADDRESS.search(line)
        if not match:
            continue
        address = int(match[1], 16)
        index = bisect.bisect_right(starts, address) - 1
        if index >= 0 and address < symbols[index][0] + symbols[index][1]:
            counts[symbols[index][0]] += 1
    if process.wait() != 0:
        raise RuntimeError("rg failed while scanning Jeff assembly")
    records = [
        {"address": f"0x{address:08X}", "size": symbols[bisect.bisect_left(starts, address)][1],
         "vmx128_instructions": count, "decompiler": "xenon"}
        for address, count in sorted(counts.items())
    ]
    output = LAB / "analysis/vmx128-functions.json"
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(records, indent=2) + "\n", encoding="utf-8")
    print(f"VMX128_FUNCTIONS={len(records)} VMX128_INSTRUCTIONS={sum(counts.values())} OUTPUT={output}")


if __name__ == "__main__":
    main()
