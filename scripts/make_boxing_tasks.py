#!/usr/bin/env python3
"""Package Jeff assembly and Ghidra C into bounded, private agent tasks."""

import bisect
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
BUILD = ROOT / "build/4D5308C9"
from lab_paths import LAB
SYMBOLS = ROOT / "config/4D5308C9/symbols.txt"
FUNCTION = re.compile(r"^(\S+) = \.text:0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)")
INSTRUCTION = re.compile(r"^/\* ([0-9A-Fa-f]{8}) ")


def main() -> None:
    candidates = json.loads((BUILD / "boxing_candidates.json").read_text(encoding="utf-8"))
    selected = {int(item["address"], 16): item for item in candidates}
    sizes = {}
    for line in SYMBOLS.read_text(encoding="utf-8").splitlines():
        match = FUNCTION.match(line)
        if match:
            address = int(match[2], 16)
            if address in selected:
                sizes[address] = int(match[3], 16)
    starts = sorted(sizes)
    assembly = {start: [] for start in starts}
    for source_path in sorted((BUILD / "asm").glob("auto_*_text.s")):
        with source_path.open(encoding="utf-8") as source:
            for line in source:
                match = INSTRUCTION.match(line)
                if not match:
                    continue
                address = int(match[1], 16)
                index = bisect.bisect_right(starts, address) - 1
                if index >= 0:
                    start = starts[index]
                    if address < start + sizes[start]:
                        assembly[start].append(line)
    # Jeff removes isolated functions from the former monolithic assembly unit.
    # Use their dedicated files so agent packets never silently lose assembly.
    for start in starts:
        isolated = BUILD / "asm/auto_match" / f"func_{start:08X}.s"
        if isolated.exists():
            assembly[start] = isolated.read_text(encoding="utf-8").splitlines(keepends=True)
        if not assembly[start]:
            raise RuntimeError(f"Missing Jeff assembly for 0x{start:08X}")
    task_dir = LAB / "agents/boxing-tasks"
    task_dir.mkdir(parents=True, exist_ok=True)
    tasks = []
    for item in candidates:
        start = int(item["address"], 16)
        object_path = BUILD / "obj/auto_match" / f"func_{start:08X}.obj"
        asm_path = task_dir / f"{item['address']}.s"
        asm_path.write_text("".join(assembly[start]), encoding="utf-8")
        c_path = LAB / "analysis/boxing-c" / f"{item['address']}.c"
        tasks.append({
            "address": item["address"],
            "size": sizes[start],
            "reference_count": item["reference_count"],
            "assembly": str(asm_path),
            "ghidra_c": str(c_path) if c_path.exists() else None,
            "target_object": str(object_path) if object_path.exists() else None,
            "candidate_symbol": f"fn_{start:08X}",
            "evaluator": str(ROOT / "scripts/evaluate_candidate.py"),
            "candidate_flags_to_try": ["/O1", "/O2"],
            "status": "UNVERIFIED",
        })
    index_path = task_dir / "index.json"
    index_path.write_text(json.dumps(tasks, indent=2) + "\n", encoding="utf-8")
    print(f"Packaged {len(tasks)} private tasks in {task_dir}")


if __name__ == "__main__":
    main()
