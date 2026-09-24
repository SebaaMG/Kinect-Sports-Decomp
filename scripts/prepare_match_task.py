#!/usr/bin/env python3
"""Create a private, isolated workspace for one bounded matching task."""

import argparse
import json
import shutil
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("address", help="Boxing task address, for example 0x82400E48")
    args = parser.parse_args()
    address = f"0x{int(args.address, 16):08X}"
    index = json.loads((LAB / "agents/boxing-tasks/index.json").read_text(encoding="utf-8"))
    task = next((item for item in index if item["address"].upper() == address.upper()), None)
    if task is None:
        parser.error(f"No indexed Boxing task for {address}")
    if not task["target_object"]:
        parser.error(f"No isolated target for {address}; run scripts/isolate_functions.py {address} and ninja")
    workspace_root = LAB / "agents/matching" / address
    workspace_root.mkdir(parents=True, exist_ok=True)
    workspace = Path(tempfile.mkdtemp(prefix="run-", dir=workspace_root))
    shutil.copyfile(task["assembly"], workspace / "original.s")
    shutil.copyfile(task["ghidra_c"], workspace / "ghidra.c")
    packet = {
        "address": address,
        "size": task["size"],
        "reference_count": task["reference_count"],
        "original_assembly": str(workspace / "original.s"),
        "ghidra_c": str(workspace / "ghidra.c"),
        "target_object": task["target_object"],
        "expected_symbol": task["candidate_symbol"],
        "candidate_path": str(workspace / "candidate.c"),
        "evaluation_command": [
            "python3", str(ROOT / "scripts/evaluate_candidate.py"), address,
            str(workspace / "candidate.c"), "--cflags", "/nologo", "/c", "/TC", "/O1",
        ],
        "status": "UNVERIFIED",
        "completion_rule": "Require objective code and relocation review before integration.",
    }
    (workspace / "task.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
    print(workspace / "task.json")


if __name__ == "__main__":
    main()
