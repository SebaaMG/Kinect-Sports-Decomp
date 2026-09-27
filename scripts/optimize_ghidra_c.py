#!/usr/bin/env python3
"""Compile and compare small, repeatable corrections to Ghidra C."""

import argparse
from collections import Counter
from concurrent.futures import ThreadPoolExecutor, as_completed
import hashlib
import json
from pathlib import Path
import re
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parent.parent
WIDTHS = {"undefined1": 1, "byte": 1, "char": 1, "undefined": 1,
          "undefined2": 2, "short": 2, "ushort": 2,
          "undefined4": 4, "int": 4, "uint": 4, "float": 4,
          "undefined8": 8, "longlong": 8, "ulonglong": 8, "double": 8}
TYPES = "|".join(WIDTHS)
ARRAY = re.compile(r"(?m)^(?P<indent>[ \t]+)(?P<type>(?:" + TYPES +
                   r")(?:[ \t]*\*+)?)[ \t]*(?P<name>\w*Stack_\w+)\s*\[(?P<count>\d+)\]\s*;")
STACK_ARG = re.compile(r"(?m)^[ \t]+(?P<type>" + TYPES +
                       r")\s+(?P<name>in_stack_(?P<offset>[0-9a-fA-F]+))\s*;")
STACK_WORD = re.compile(r"(?m)^[ \t]+(?P<type>undefined4|uint|int|float)\s+"
                        r"(?P<name>[a-zA-Z]+Stack_(?P<offset>[0-9a-fA-F]+))\s*;")
POINTER_EXTERN = re.compile(
    r"(?m)^extern\s+(?:unsigned int|int|float|undefined4)\s+\*+\s*(?P<name>\w+)\s*;")
SUBPIECE_WORD = re.compile(
    r"\b(?P<value>[A-Za-z_]\w*(?:\[\d+\])?)\._(?P<offset>[04])_4_")
VECTOR_ARRAY = re.compile(r"(?m)^[ \t]+undefined1\s+(?P<name>\w+)\s*\[16\]\s*;")
VECTOR_DEREF = re.compile(r"^\*\(undefined1\s*\(\s*\*\s*\)\s*\[16\]\)\((.*)\)$")


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def pointer_extern_repair_variants(source: str, compiler_error: str):
    """Retry globals Ghidra typed as pointers when arithmetic needs a value."""
    lines = source.splitlines()
    names = set()
    declarations = {match['name']: match for match in POINTER_EXTERN.finditer(source)}
    for number in re.findall(
            r"candidate\.c\((\d+)\)\s*:\s*error C(?:2297|2440):", compiler_error):
        index = int(number) - 1
        if index < 0 or index >= len(lines):
            continue
        names.update(set(re.findall(r"\b[A-Za-z_]\w*\b", lines[index])) & declarations.keys())
    if not names or len(names) > 8:
        return
    for scalar in ('float', 'unsigned int'):
        variant = source
        for name in sorted(names):
            match = re.search(r"(?m)^extern\s+(?:unsigned int|int|float|undefined4)\s+\*+\s*"
                              + re.escape(name) + r"\s*;", variant)
            if match:
                variant = variant[:match.start()] + f'extern {scalar} {name};' + variant[match.end():]
        if variant != source:
            yield f'retype {len(names)} global pointers as {scalar}', variant


def subpiece_word_variant(source: str) -> str:
    """Render Ghidra's 64-bit pseudo-fields as ordinary C bit operations."""
    def replace(match):
        value = match['value']
        if match['offset'] == '4':
            return f'((uint)({value}))'
        return f'((uint)((ulonglong)({value}) >> 32))'
    return SUBPIECE_WORD.sub(replace, source)


def vector_copy_variant(source: str, compiler_error: str) -> str:
    """Render Ghidra's 16-byte array assignments as C memory copies."""
    arrays = {match['name'] for match in VECTOR_ARRAY.finditer(source)}
    lines = source.splitlines(keepends=True)
    def operand(value):
        value = value.strip()
        if value in arrays:
            return value
        match = VECTOR_DEREF.fullmatch(value)
        return f'(const void *)({match[1]})' if match else None
    changed = False
    for number in set(re.findall(
            r"candidate\.c\((\d+)\)\s*:\s*error C2106:", compiler_error)):
        index = int(number) - 1
        if not 0 <= index < len(lines):
            continue
        line = lines[index]
        if line.count(' = ') != 1 or not line.rstrip().endswith(';'):
            continue
        lhs, rhs = line.rstrip().removesuffix(';').split(' = ', 1)
        target = operand(lhs)
        value = operand(rhs)
        if target is None or value is None:
            continue
        indent = line[:len(line) - len(line.lstrip())]
        lines[index] = f'{indent}memcpy((void *)({target}), {value}, 16);\n'
        changed = True
    if not changed:
        return source
    result = ''.join(lines)
    if not re.search(r'(?m)^extern\s+void\s+\*memcpy\(', result):
        result = 'extern void *memcpy(void *, const void *, unsigned int);\n' + result
    return result


def missing_ram_extern_variant(source: str, compiler_error: str) -> str:
    """Declare address-named Ghidra globals omitted from the C seed."""
    names = set(re.findall(r"error C2065:\s*'([A-Za-z_]\w*Ram[0-9A-Fa-f]{8})'",
                           compiler_error))
    if not names or len(names) > 32:
        return source
    declarations = []
    scalar = {'u': 'unsigned int', 'i': 'int', 'b': 'unsigned char',
              'c': 'char', 'f': 'float', 'l': 'long long'}
    for name in sorted(names):
        prefix = name.split('Ram', 1)[0]
        pointers = len(prefix) - len(prefix.lstrip('p'))
        base = scalar.get(prefix[pointers:])
        if base is None:
            continue
        declarations.append(f'extern {base} {"*" * pointers}{name};')
    return '\n'.join(declarations) + '\n' + source if declarations else source


def call_relocation_variant(source: str, diff_json: str, symbol: str) -> str:
    """Use the original object's direct-call targets when Ghidra chose an alias."""
    data = json.loads(diff_json)
    left = next((s for s in data['left']['symbols'] if s['name'] == symbol), None)
    right = next((s for s in data['right']['symbols'] if s['name'] == symbol), None)
    if not left or not right or len(left.get('instructions', [])) != len(right.get('instructions', [])):
        return source
    targets = {}
    for original, candidate in zip(left['instructions'], right['instructions']):
        old = original.get('instruction', {}).get('formatted', '')
        new = candidate.get('instruction', {}).get('formatted', '')
        original_call = re.fullmatch(r'(b|bl) fn_([0-9A-Fa-f]{8})', old)
        candidate_call = re.fullmatch(r'(b|bl) fn_([0-9A-Fa-f]{8})', new)
        if not original_call or not candidate_call or original_call[1] != candidate_call[1]:
            continue
        wrong, correct = candidate_call[2].upper(), original_call[2].upper()
        if wrong == correct:
            continue
        if wrong in targets and targets[wrong] != correct:
            return source
        targets[wrong] = correct
    if not targets:
        return source
    return re.sub(r'\bfn_([0-9A-Fa-f]{8})\b',
                  lambda m: 'fn_' + targets.get(m[1].upper(), m[1]), source)


def scalar_variant(source: str, match: re.Match[str]) -> str | None:
    """Accept arrays used through [0] or passed directly as an argument."""
    name = match["name"]
    tail = source[match.end():]
    token = re.compile(r"\b" + re.escape(name) + r"\b")
    replacements = []
    indexed = False
    for use in token.finditer(tail):
        suffix = tail[use.end():]
        index = re.match(r"\s*\[0\]", suffix)
        if index:
            indexed = True
            replacements.append((use.start(), use.end() + index.end(), name))
        else:
            prefix = tail[:use.start()].rstrip()
            if not prefix or prefix[-1] not in "(," or not re.match(r"\s*[,)]", suffix):
                return None
            replacements.append((use.start(), use.end(), "&" + name))
    if not indexed:
        return None
    for start, end, replacement in reversed(replacements):
        tail = tail[:start] + replacement + tail[end:]
    declaration = f'{match["indent"]}{match["type"]} {name};'
    return source[:match.start()] + declaration + tail


def argument_variant(source: str, symbol: str) -> str | None:
    signature = re.search(r"\b" + re.escape(symbol) + r"\(([^()]*)\)\s*\{", source)
    if not signature:
        return None
    params = [p.strip() for p in signature[1].split(",") if p.strip() not in ("", "void")]
    found = list(STACK_ARG.finditer(source, signature.end()))
    slots = {}
    for match in found:
        offset = int(match["offset"], 16)
        width = WIDTHS[match["type"]]
        if match["type"] in ("float", "double") or offset < 0x50:
            continue
        # Xenon homes eight register arguments in 8-byte slots. Overflow
        # arguments start at SP+0x50; integers are right-justified (big endian).
        slot = 8 + (offset - 0x50) // 8
        if offset % 8 != (8 - width) % 8 or slot < len(params) or slot > 31:
            continue
        if slot in slots:
            return None
        slots[slot] = match
    if not slots:
        return None
    for slot in range(len(params), max(slots) + 1):
        match = slots.get(slot)
        params.append(f'{match["type"]} {match["name"]}' if match else
                      f"undefined8 unused_arg_{slot + 1}")
    result = source
    for match in sorted(slots.values(), key=lambda m: m.start(), reverse=True):
        result = result[:match.start()] + result[match.end():]
    return result[:signature.start(1)] + ", ".join(params) + result[signature.end(1):]


def resize_variants(source: str, delta: int):
    if delta <= 0:
        return
    for match in reversed(list(ARRAY.finditer(source))):
        count = int(match["count"])
        width = 4 if "*" in match["type"] else WIDTHS[match["type"]]
        if count <= 1 or delta % width:
            continue
        # Preserve every explicitly indexed element. Calls/casts can access
        # more; only a rebuilt exact object can accept the proposed size.
        minimum = 1
        valid = True
        for index in re.findall(r"\b" + re.escape(match["name"]) + r"\s*\[([^]]+)\]",
                                source[match.end():]):
            try:
                minimum = max(minimum, int(index.strip(), 0) + 1)
            except ValueError:
                valid = False
                break
        new_count = max(minimum, count - delta // width)
        if not valid or new_count >= count:
            continue
        result = source[:match.start("count")] + str(new_count) + source[match.end("count"):]
        yield f'resize {match["name"]} {count}->{new_count}', result


def adjacent_stack_variants(source: str):
    """Recover an address-taken pair Ghidra split into independent locals."""
    words = sorted(STACK_WORD.finditer(source), key=lambda m: -int(m["offset"], 16))
    for first, second in zip(words, words[1:]):
        if int(first["offset"], 16) - int(second["offset"], 16) != 4:
            continue
        if not re.search(r"&\s*" + re.escape(first["name"]) + r"\b", source[first.end():]):
            continue
        name = "stack_pair_" + first["offset"]
        result = source
        for match in sorted((first, second), key=lambda m: m.start(), reverse=True):
            declaration = (f'  struct {{ {first["type"]} first; {second["type"]} second; }} {name};'
                           if match is first else "")
            result = result[:match.start()] + declaration + result[match.end():]
        # Extern declarations may share the original names. Only rewrite uses
        # after the new local declaration, never the file's extern declarations.
        start = result.index("} " + name + ";") + len("} " + name + ";")
        tail = result[start:]
        for match, field in ((first, "first"), (second, "second")):
            tail = re.sub(r"\b" + re.escape(match["name"]) + r"\b", name + "." + field, tail)
        yield "adjacent stack words", result[:start] + tail


def measure(data: dict, symbol: str) -> dict:
    left = next((s for s in data["left"]["symbols"] if s["name"] == symbol), None)
    right = next((s for s in data["right"]["symbols"] if s["name"] == symbol), None)
    result = {"score": left.get("match_percent", 0) if left else 0,
              "size": int(left.get("size", 0)) if left else 0,
              "candidate_size": int(right.get("size", 0)) if right else 0,
              "exact": False, "frame_delta": 0}
    if not left or not right:
        return result
    sections = [s for s in data["left"].get("sections", []) if int(s.get("size", 0))]
    result["exact"] = (result["score"] == 100.0 and result["size"] > 0 and
                       result["size"] == result["candidate_size"] and
                       bool(sections) and all(s.get("match_percent") == 100.0 for s in sections) and
                       not any(i.get("diff_kind") for item in (left, right)
                               for i in item.get("instructions", [])))
    frames = []
    for item in (left, right):
        frame = None
        for instruction in item.get("instructions", []):
            text = instruction.get("instruction", {}).get("formatted", "")
            match = re.fullmatch(r"st[wd]u r1, -(0x[0-9a-f]+|\d+)\(r1\)", text)
            if match:
                frame = int(match[1], 0)
                break
        frames.append(frame)
    if None not in frames:
        result["frame_delta"] = frames[1] - frames[0]
    return result


def optimize(stem: str, args, config: dict, names: dict) -> dict:
    source_path = args.repo / "src/auto_match" / f"func_{stem}.c"
    if not source_path.is_file() and args.source_root is not None:
        source_path = args.source_root / f"func_{stem}.c"
    target_path = args.objects_root / "obj/auto_match" / f"func_{stem}.obj"
    if not source_path.is_file():
        return {"address": stem, "status": "missing_source"}
    if not target_path.is_file():
        return {"address": stem, "status": "missing_original_object"}
    source = source_path.read_text()
    source_hash = sha(source.encode())
    target_hash = sha(target_path.read_bytes())
    symbol = names.get(stem, f"fn_{stem}")
    entry = config.get(f"auto_match/func_{stem}.c", {})
    flags = entry.get("extra_cflags", ["/O1"]) if isinstance(entry, dict) else ["/O1"]
    directory = args.output / stem
    directory.mkdir(parents=True, exist_ok=True)
    fingerprint = sha(json.dumps([source_hash, target_hash, flags, args.compiler_hash,
                                  args.script_hash]).encode())
    previous = directory / "result.json"
    if previous.exists() and not args.retry:
        cached = json.loads(previous.read_text())
        if cached.get("fingerprint") == fingerprint or (
            args.resume_verified and cached.get("source_sha256") == source_hash
            and cached.get("target_sha256") == target_hash
            and cached.get("compiler_sha256") == args.compiler_hash
            and cached.get("baseline", {}).get("cflags") == flags
            and (directory / "candidate.c").is_file()
            and (directory / "candidate.obj").is_file()
            and (directory / "diff.json").is_file()
        ):
            return cached
    trials = []
    seen = set()
    with tempfile.TemporaryDirectory(prefix=f"opt-{stem}-") as temp:
        work = Path(temp)
        def check(code, cflags, label):
            key = (code, tuple(cflags))
            if key in seen:
                return None
            seen.add(key)
            (work / "candidate.c").write_text(code)
            command = [args.wibo, str(args.compiler), "/nologo", "/c", "/TC", *cflags,
                       "/Focandidate.obj", "candidate.c"]
            compiled = subprocess.run(command, cwd=work, capture_output=True, text=True,
                                      timeout=120)
            if compiled.returncode:
                trials.append({"change": label, "cflags": cflags, "compile_error":
                               (compiled.stdout + compiled.stderr)[-2000:]})
                return None
            diff = subprocess.run([args.objdiff, "diff", "-1", str(target_path),
                                   "-2", "candidate.obj", "-o", "-", "--format", "json", symbol],
                                  cwd=work, capture_output=True, text=True, timeout=60)
            if diff.returncode:
                raise RuntimeError(diff.stderr[-1000:] or diff.stdout[-1000:])
            data = json.loads(diff.stdout)
            result = measure(data, symbol)
            result.update(change=label, cflags=cflags)
            trials.append(result)
            return result, code, diff.stdout, (work / "candidate.obj").read_bytes()

        best = check(source, flags, "baseline")
        if best is None:
            compiler_error = trials[0].get('compile_error', '')
            variants = list(pointer_extern_repair_variants(source, compiler_error))
            if 'error C2224:' in compiler_error:
                repaired = subpiece_word_variant(source)
                if repaired != source:
                    variants.append(('64-bit subpiece fields', repaired))
                    variants.extend((label + ', subpiece fields', subpiece_word_variant(code))
                                    for label, code in list(variants))
            if 'error C2106:' in compiler_error:
                repaired = vector_copy_variant(source, compiler_error)
                if repaired != source:
                    variants.append(('16-byte vector copies', repaired))
            if 'error C2065:' in compiler_error:
                repaired = missing_ram_extern_variant(source, compiler_error)
                if repaired != source:
                    variants.append(('missing Ghidra global declarations', repaired))
            for label, variant in variants:
                result = check(variant, flags, label)
                if result and (best is None or result[0]['score'] > best[0]['score']):
                    best = result
            if best is None:
                error = {"address": stem, "status": "baseline_compile_error", "trials": trials}
                (directory / "compile_error.json").write_text(json.dumps(error, indent=2) + "\n")
                return error
            baseline = {"score": 0, "exact": False, "cflags": flags}
        else:
            baseline = best[0].copy()
        def attempt(code, cflags, label):
            nonlocal best
            result = check(code, cflags, label)
            if result and ((result[0]["exact"] and not best[0]["exact"]) or
                           result[0]["score"] > best[0]["score"]):
                best = result

        if not best[0]["exact"]:
            renamed = re.sub(r"\bfn_([0-9A-Fa-f]{8})\b",
                             lambda m: names.get(m[1].upper(), m[0]), best[1])
            attempt(renamed, flags, "Jeff call symbols")
        if not best[0]["exact"]:
            variant = argument_variant(best[1], symbol)
            if variant:
                attempt(variant, flags, "incoming stack arguments")
        if not best[0]["exact"]:
            code = best[1]
            for match in ARRAY.finditer(code):
                variant = scalar_variant(code, match)
                if variant:
                    attempt(variant, flags, f'scalar {match["name"]}')
                if best[0]["exact"]:
                    break
        if not best[0]["exact"]:
            for label, variant in resize_variants(best[1], best[0]["frame_delta"]):
                attempt(variant, flags, label)
                if best[0]["exact"]:
                    break
        if not best[0]["exact"]:
            for label, variant in adjacent_stack_variants(best[1]):
                attempt(variant, flags, label)
                if best[0]["exact"]:
                    break
        if not best[0]["exact"] and flags in (["/O1"], ["/O2"]):
            alternate = ["/O2"] if flags == ["/O1"] else ["/O1"]
            attempt(best[1], alternate, "optimization flags")
            if not best[0]["exact"]:
                attempt(source, alternate, "original source, optimization flags")
        if not best[0]["exact"]:
            variant = call_relocation_variant(best[1], best[2], symbol)
            if variant != best[1]:
                attempt(variant, best[0]['cflags'], 'original call targets')
        result = {"address": stem, "fingerprint": fingerprint, "source_sha256": source_hash,
                  "target_sha256": target_hash, "compiler_sha256": args.compiler_hash,
                  "symbol": symbol, "baseline": baseline, "best": best[0], "trials": trials,
                  "improved": best[0]["score"] > baseline["score"],
                  "new_exact": best[0]["exact"] and not baseline["exact"]}
        (directory / "candidate.c").write_text(best[1])
        (directory / "candidate.obj").write_bytes(best[3])
        (directory / "diff.json").write_text(best[2])
        previous.write_text(json.dumps(result, indent=2) + "\n")
        return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("addresses", nargs="*")
    parser.add_argument("--repo", type=Path, default=ROOT)
    parser.add_argument("--objects-root", type=Path)
    parser.add_argument("--source-root", type=Path,
                        help="fallback directory of generated Ghidra C sources")
    parser.add_argument("--manifest", type=Path,
                        help="JSONL manifest listing Jeff function addresses")
    parser.add_argument("--compiler", type=Path, required=True)
    parser.add_argument("--wibo", default="wibo-kinect")
    parser.add_argument("--objdiff", default="objdiff-cli")
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--report", type=Path, help="select non-exact functions from an objdiff report")
    parser.add_argument("--min-match", type=float, default=98)
    parser.add_argument("--max-match", type=float, default=100,
                        help="exclusive upper fuzzy match bound for --report")
    parser.add_argument("--min-size", type=int, default=0,
                        help="minimum original code size for --report")
    parser.add_argument("--jobs", type=int, default=4)
    parser.add_argument("--retry", action="store_true")
    parser.add_argument("--resume-verified", action="store_true",
                        help="reuse prior trials when source, target, compiler and flags agree")
    parser.add_argument("--apply", action="store_true", help="apply exact results and their object settings")
    args = parser.parse_args()
    args.repo = args.repo.resolve()
    args.compiler = args.compiler.resolve(strict=True)
    args.objects_root = (args.objects_root or args.repo / "build/4D5308C9").resolve()
    args.output = args.output.resolve()
    args.output.mkdir(parents=True, exist_ok=True)
    if args.jobs < 1:
        parser.error("--jobs must be positive")
    args.compiler_hash = sha(args.compiler.read_bytes())
    args.script_hash = sha(Path(__file__).read_bytes())
    manifest_path = args.repo / "config/4D5308C9/objects.json"
    manifest = json.loads(manifest_path.read_text())
    config = manifest["game"]["objects"]
    names = {}
    for line in (args.repo / "config/4D5308C9/symbols.txt").read_text().splitlines():
        match = re.match(r"([A-Za-z_]\w*) = \.text:0x([0-9A-Fa-f]+);.*type:function", line)
        if match and not match[1].startswith("fn_"):
            names[match[2].upper()] = match[1]
    addresses = {f"{int(address, 16):08X}" for address in args.addresses}
    if args.manifest:
        for line in args.manifest.read_text().splitlines():
            if line.strip():
                addresses.add(f"{int(json.loads(line)['stem'], 16):08X}")
    if args.report:
        for unit in json.loads(args.report.read_text())["units"]:
            path = unit.get("metadata", {}).get("source_path", "")
            match = re.fullmatch(r"src/auto_match/func_([0-9A-F]{8})\.c", path)
            score = unit.get("measures", {}).get("fuzzy_match_percent", 0)
            size = int(unit.get("measures", {}).get("total_code", 0))
            if match and args.min_match <= score < args.max_match and size >= args.min_size:
                addresses.add(match[1])
    if not addresses:
        parser.error("provide addresses or --report")
    results = []
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        pending = {pool.submit(optimize, stem, args, config, names): stem for stem in sorted(addresses)}
        for future in as_completed(pending):
            stem = pending[future]
            try:
                result = future.result()
            except (OSError, ValueError, RuntimeError, subprocess.TimeoutExpired) as error:
                result = {"address": stem, "status": "error", "error": str(error)}
            results.append(result)
            if result.get("new_exact") or len(results) % 25 == 0:
                print(json.dumps({"done": len(results), "total": len(addresses), "address": stem,
                                  "new_exact": sum(r.get("new_exact", False) for r in results),
                                  "improved": sum(r.get("improved", False) for r in results)}), flush=True)
    applied = []
    if args.apply:
        # Re-read immediately before editing; a separate worktree is recommended.
        manifest = json.loads(manifest_path.read_text())
        for result in results:
            if not result.get("new_exact"):
                continue
            stem = result["address"]
            path = args.repo / "src/auto_match" / f"func_{stem}.c"
            if sha(path.read_bytes()) != result["source_sha256"]:
                raise RuntimeError(f"Source changed while testing: {path}")
            path.write_bytes((args.output / stem / "candidate.c").read_bytes())
            entry = manifest["game"]["objects"][f"auto_match/func_{stem}.c"]
            if not isinstance(entry, dict):
                raise RuntimeError(f"Expected object settings for {stem}")
            entry.update(status="Matching", extra_cflags=result["best"]["cflags"])
            applied.append(stem)
        manifest_path.write_text(json.dumps(manifest, indent=2) + "\n")
    summary = {"tested": len(results), "new_exact": sum(r.get("new_exact", False) for r in results),
               "new_exact_bytes": sum(r["best"]["size"] for r in results if r.get("new_exact")),
               "improved": sum(r.get("improved", False) for r in results), "applied": applied,
               "errors": sum("status" in r for r in results),
               "status_counts": dict(Counter(r["status"] for r in results if "status" in r))}
    for status in ("missing_source", "missing_original_object", "baseline_compile_error", "error"):
        (args.output / f"{status}.txt").write_text(
            "".join(r["address"] + "\n" for r in results if r.get("status") == status))
    (args.output / "summary.json").write_text(json.dumps(summary, indent=2) + "\n")
    print(json.dumps(summary), flush=True)


if __name__ == "__main__":
    main()
