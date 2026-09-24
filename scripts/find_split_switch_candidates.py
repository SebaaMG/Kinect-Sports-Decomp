#!/usr/bin/env python3
"""Flag Jeff function splits immediately after indirect branches for review.

This is a triage report, not proof that a branch is a switch. An indirect tail
call may also end at bctr. Validate bounds, table bytes, and targets separately.
"""
import argparse
import json
from pathlib import Path
import re

BRANCH = re.compile(r"/\*\s*([0-9A-Fa-f]{8})\b.*\*/\s*bctr\s*$")


def scan(path: Path):
    lines = path.read_text(errors="replace").splitlines()
    for index, line in enumerate(lines):
        match = BRANCH.search(line)
        if not match:
            continue
        following = lines[index + 1 : index + 6]
        if not any(".endfn " in item for item in following):
            continue
        next_function = next((re.search(r"\.fn\s+([^,\s]+)", item) for item in following if ".fn " in item), None)
        if next_function is None:
            continue
        preceding = "\n".join(lines[max(0, index - 12) : index])
        load = next((kind for kind in ("lbzx", "lhzx", "lwzx") if re.search(rf"\b{kind}\b", preceding)), "other")
        yield {"branch": "0x" + match.group(1).upper(), "load_nearby": load,
               "next_jeff_function": next_function.group(1), "assembly": path.name}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("assembly_directory", type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    rows = [row for path in sorted(args.assembly_directory.glob("auto_*_text.s")) for row in scan(path)]
    counts = {kind: sum(row["load_nearby"] == kind for row in rows)
              for kind in ("lbzx", "lhzx", "lwzx", "other")}
    result = {"total_candidates": len(rows), "counts": counts, "candidates": rows}
    payload = json.dumps(result, indent=2) + "\n"
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(payload)
    else:
        print(payload, end="")


if __name__ == "__main__":
    main()
