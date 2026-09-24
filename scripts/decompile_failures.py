"""Preserve multiline Ghidra decompiler errors by requested address."""
from pathlib import Path
import re

START = re.compile(r'^\s*(?:0x)?([0-9A-Fa-f]{8})\s+\d+\b.*:')


def read_failures(path):
    path = Path(path)
    if not path.is_file():
        return {}
    results = {}
    address = None
    lines = []
    for line in path.read_text(errors='replace').splitlines():
        match = START.match(line)
        if match:
            if address is not None:
                results[address] = '\n'.join(lines)[:4000]
            address = int(match[1], 16)
            lines = [line]
        elif address is not None:
            lines.append(line)
    if address is not None:
        results[address] = '\n'.join(lines)[:4000]
    return results
