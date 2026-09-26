#!/usr/bin/env python3
"""Compile one decomp candidate and report an objective, bounded objdiff result."""

import argparse
import json
import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB as DEFAULT_LAB


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("address", help="Jeff function start, for example 0x82400E48")
    parser.add_argument("source", type=Path, help="candidate C with a fn_<ADDRESS> definition")
    parser.add_argument("--lab", type=Path, default=DEFAULT_LAB)
    parser.add_argument("--compiler", type=Path,
                        help="path to the Xbox 360 cl.exe (defaults to the local lab compiler)")
    parser.add_argument("--cflags", nargs="+", default=["/nologo", "/c", "/TC", "/O2"])
    args = parser.parse_args()
    address = int(args.address, 16)
    stem = f"{address:08X}"
    symbol = f"fn_{stem}"
    original = ROOT / "build/4D5308C9/obj/auto_match" / f"func_{stem}.obj"
    if address == 0x82FA5958:
        original = ROOT / "build/4D5308C9/obj/compiler_probe/add.obj"
    if not original.is_file():
        parser.error(f"Missing isolated original object: {original}; run scripts/isolate_functions.py first")
    source = args.source.resolve(strict=True)
    runs = args.lab / "candidate-evals" / stem
    runs.mkdir(parents=True, exist_ok=True)
    work = Path(tempfile.mkdtemp(prefix="run-", dir=runs))
    shutil.copyfile(source, work / "candidate.c")
    compiler = (args.compiler or args.lab / "tools/compilers/X360/16.00.10224.00/cl.exe").resolve()
    if not compiler.is_file():
        parser.error(f"Xbox 360 compiler not found: {compiler}; pass --compiler /path/to/cl.exe")
    wibo = os.environ.get("WIBO") or shutil.which("wibo-kinect") or shutil.which("wibo") or "wibo"
    objdiff = os.environ.get("OBJDIFF_CLI") or shutil.which("objdiff-cli") or "objdiff-cli"
    report = {
        "address": f"0x{stem}",
        "symbol": symbol,
        "source": str(source),
        "compiler": str(compiler),
        "cflags": args.cflags,
    }
    result = subprocess.run(
        [str(wibo), str(compiler), *args.cflags, "/Focandidate.obj", "candidate.c"],
        cwd=work, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
    )
    report["compile_exit_code"] = result.returncode
    report["compiler_output"] = result.stdout[-4000:]
    if result.returncode == 0:
        diff_path = work / "diff.json"
        diff = subprocess.run(
            [str(objdiff), "diff", "-1", str(original), "-2", "candidate.obj",
             "-o", str(diff_path), "--format", "json", symbol],
            cwd=work, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
        )
        report["objdiff_exit_code"] = diff.returncode
        report["diff_path"] = str(diff_path)
        if diff.returncode == 0:
            data = json.loads(diff_path.read_text(encoding="utf-8"))
            target = next((s for s in data["left"]["symbols"] if s["name"] == symbol), None)
            candidate = next((s for s in data["right"]["symbols"] if s["name"] == symbol), None)
            report["target_size"] = target.get("size") if target else None
            report["candidate_size"] = candidate.get("size") if candidate else None
            report["code_match_percent"] = target.get("match_percent") if target else None
        else:
            report["objdiff_output"] = diff.stdout[-2000:]
    output = work / "result.json"
    output.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(report, indent=2))
    return 0 if result.returncode == 0 and report.get("objdiff_exit_code") == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
