#!/usr/bin/env python3
"""Rank functions whose Jeff disassembly refers to Boxing symbols or strings."""

import bisect
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SYMBOLS = ROOT / "config/4D5308C9/symbols.txt"
ASM = ROOT / "build/4D5308C9/asm/auto_02_82230000_text.s"
OUTPUT = ROOT / "build/4D5308C9/boxing_candidates.json"
FUNCTION = re.compile(r"^(\S+) = \.text:0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)")
INSTRUCTION = re.compile(r"^/\* ([0-9A-Fa-f]{8}) ")


def main() -> None:
    functions = []
    with SYMBOLS.open(encoding="utf-8") as source:
        for line in source:
            match = FUNCTION.match(line)
            if match:
                functions.append((int(match[2], 16), int(match[3], 16), match[1]))
    functions.sort()
    starts = [item[0] for item in functions]
    counts = Counter()
    examples = defaultdict(list)
    with ASM.open(encoding="utf-8") as source:
        for line in source:
            if "boxing" not in line.lower():
                continue
            match = INSTRUCTION.match(line)
            if not match:
                continue
            address = int(match[1], 16)
            index = bisect.bisect_right(starts, address) - 1
            if index < 0:
                continue
            start, size, name = functions[index]
            if address >= start + size:
                continue
            counts[start] += 1
            if len(examples[start]) < 3:
                examples[start].append({"instruction": f"0x{address:08X}", "reference": line.strip()[-240:]})
    result = [
        {
            "address": f"0x{start:08X}",
            "name": functions[bisect.bisect_left(starts, start)][2],
            "reference_count": count,
            "examples": examples[start],
        }
        for start, count in counts.most_common()
    ]
    OUTPUT.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"{len(result)} functions with Boxing references; wrote {OUTPUT}")
    for item in result[:10]:
        print(f"{item['address']}  {item['reference_count']:4}  {item['name']}")


if __name__ == "__main__":
    main()
