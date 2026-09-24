#!/usr/bin/env python3
"""Add small Jeff split units for selected function addresses."""

import argparse
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SYMBOLS = ROOT / "config/4D5308C9/symbols.txt"
SPLITS = ROOT / "config/4D5308C9/splits.txt"
OBJECTS = ROOT / "config/4D5308C9/objects.json"
FUNCTION = re.compile(r"= \.text:0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)")
RANGE = re.compile(r"^\s*\.text\s+start:0x([0-9A-Fa-f]+) end:0x([0-9A-Fa-f]+)")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("addresses", nargs="+", help="Function start addresses, hexadecimal")
    args = parser.parse_args()
    sizes = {}
    for line in SYMBOLS.read_text(encoding="utf-8").splitlines():
        match = FUNCTION.search(line)
        if match:
            sizes[int(match[1], 16)] = int(match[2], 16)
    original = SPLITS.read_text(encoding="utf-8")
    occupied = []
    for line in original.splitlines():
        match = RANGE.match(line)
        if match:
            occupied.append((int(match[1], 16), int(match[2], 16)))
    additions = []
    for value in args.addresses:
        start = int(value, 16)
        size = sizes.get(start)
        if size is None:
            raise SystemExit(f"Jeff has no .text function at 0x{start:08X}")
        end = start + size
        if any(start == left and end == right for left, right in occupied):
            print(f"Already isolated: 0x{start:08X}")
            continue
        if any(start < right and left < end for left, right in occupied):
            raise SystemExit(f"Split overlaps an existing unit: 0x{start:08X}-0x{end:08X}")
        occupied.append((start, end))
        additions.append(f"auto_match/func_{start:08X}.c:\n\t.text       start:0x{start:08X} end:0x{end:08X}\n")
    if additions:
        SPLITS.write_text(original.rstrip() + "\n" + "".join(additions), encoding="utf-8")
        objects = json.loads(OBJECTS.read_text(encoding="utf-8"))
        game = objects.setdefault("game", {"cflags": "base", "objects": {}})
        for value in args.addresses:
            start = int(value, 16)
            if any(f"func_{start:08X}.c:" in addition for addition in additions):
                game["objects"].setdefault(f"auto_match/func_{start:08X}.c", "MISSING")
        OBJECTS.write_text(json.dumps(objects, indent=2) + "\n", encoding="utf-8")
    print(f"Added {len(additions)} function splits; run Jeff split or ninja to regenerate objects")


if __name__ == "__main__":
    main()
