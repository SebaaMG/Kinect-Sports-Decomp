#!/usr/bin/env python3
"""Recover strictly validated Xbox MSVC byte/halfword relative jump tables.

The output is a private candidate manifest. It does not modify Ghidra or Jeff
boundaries; a target list alone cannot establish the enclosing C function.
"""
import bisect
import json
from pathlib import Path
import re
import sqlite3
import struct

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
SYMBOLS = ROOT / 'config/4D5308C9/symbols.txt'
PE = LAB / 'originals/kinect-sports-1/default.exe'
OUT = LAB / 'analysis/full-game-export/validated-relative-switches.json'
OBJECT = re.compile(r'^\S+ = \.[^:]+:0x([0-9A-Fa-f]+); // type:object size:0x([0-9A-Fa-f]+)')
INS = re.compile(r'/\*\s*([0-9A-Fa-f]{8})\s+[0-9A-Fa-f]+\s+((?:[0-9A-Fa-f]{2} ){3}[0-9A-Fa-f]{2})\s*\*/\s*([\w.]+)\s*(.*)')


class Image:
    def __init__(self, path):
        self.data = path.read_bytes()
        pe = struct.unpack_from('<I', self.data, 0x3c)[0]
        coff = pe + 4
        count = struct.unpack_from('<H', self.data, coff + 2)[0]
        optional_size = struct.unpack_from('<H', self.data, coff + 16)[0]
        optional = coff + 20
        self.base = struct.unpack_from('<I', self.data, optional + 28)[0]
        self.sections = []
        for index in range(count):
            start = optional + optional_size + 40 * index
            name = self.data[start:start+8].split(b'\0')[0].decode()
            virtual_size, rva, raw_size, raw_offset = struct.unpack_from('<IIII', self.data, start+8)
            self.sections.append((self.base+rva, virtual_size, raw_offset, raw_size, name))

    def read(self, address, size):
        for base, virtual_size, raw_offset, raw_size, _ in self.sections:
            offset = address - base
            if 0 <= offset and offset + size <= min(virtual_size, raw_size):
                return self.data[raw_offset+offset:raw_offset+offset+size]
        return None

    def in_text(self, address):
        return any(name == '.text' and base <= address < base+size
                   for base, size, _, _, name in self.sections)


def instructions(data):
    result = []
    for line in data.decode('utf-8', 'replace').splitlines():
        match = INS.search(line)
        if match:
            result.append((int(match[1], 16), int(match[2].replace(' ', ''), 16),
                           match[3], [part.strip() for part in match[4].split(',')]))
    return result


def writer(ins, register, before, limit=26):
    for i in range(before-1, max(-1, before-limit-1), -1):
        _, _, mnemonic, operands = ins[i]
        if mnemonic.startswith('st') or not operands:
            continue
        if operands[0] == register:
            return i
    return None


def constant(ins, register, before, depth=0):
    if depth > 5:
        return None
    i = writer(ins, register, before)
    if i is None:
        return None
    _, word, mnemonic, operands = ins[i]
    if mnemonic == 'lis':
        return (word & 0xffff) << 16
    if mnemonic == 'li':
        value = word & 0xffff
        return value - 0x10000 if value & 0x8000 else value
    if mnemonic in ('addi', 'ori') and len(operands) >= 3:
        source = constant(ins, operands[1], i, depth+1)
        if source is None:
            return None
        immediate = word & 0xffff
        if mnemonic == 'addi' and immediate & 0x8000:
            immediate -= 0x10000
        return (source + immediate if mnemonic == 'addi' else source | immediate) & 0xffffffff
    if mnemonic in ('mr', 'mr.') and len(operands) >= 2:
        return constant(ins, operands[1], i, depth+1)
    return None


def recognize(ins, bctr_index, objects, image):
    previous = bctr_index - 1
    while previous >= 0 and ins[previous][2] == 'nop':
        previous -= 1
    if previous < 0 or ins[previous][2] != 'mtctr':
        return None
    ctr = ins[previous][3][0]
    added = writer(ins, ctr, previous)
    if added is None or ins[added][2] != 'add' or len(ins[added][3]) != 3:
        return None
    _, x, y = ins[added][3]
    cx, cy = constant(ins, x, added), constant(ins, y, added)
    if (cx is None) == (cy is None):
        return None
    anchor, offset = (cx, y) if cx is not None else (cy, x)
    scaled = writer(ins, offset, added)
    if scaled is None:
        return None
    mnemonic = ins[scaled][2]
    if mnemonic == 'slwi' and len(ins[scaled][3]) == 3:
        scale = 1 << int(ins[scaled][3][2], 0)
        loaded = writer(ins, ins[scaled][3][1], scaled)
    elif mnemonic in ('lbzx', 'lhzx'):
        scale = 1
        loaded = scaled
    else:
        return None
    if loaded is None or ins[loaded][2] not in ('lbzx', 'lhzx') or len(ins[loaded][3]) != 3:
        return None
    kind = ins[loaded][2]
    element_size = 1 if kind == 'lbzx' else 2
    _, r1, r2 = ins[loaded][3]
    c1, c2 = constant(ins, r1, loaded), constant(ins, r2, loaded)
    if (c1 is None) == (c2 is None):
        return None
    table = c1 if c1 is not None else c2
    object_size = objects.get(table)
    if not object_size or object_size % element_size or object_size > 1024:
        return None
    raw = image.read(table, object_size)
    if raw is None:
        return None
    entries = [int.from_bytes(raw[i:i+element_size], 'big')
               for i in range(0, len(raw), element_size)]
    targets = [anchor + entry * scale for entry in entries]
    if not (2 <= len(targets) <= 512 and len(set(targets)) >= 2):
        return None
    if not all(value & 3 == 0 and image.in_text(value)
               and anchor <= value < anchor + 0x10000 for value in targets):
        return None
    return {'branch': f'0x{ins[bctr_index][0]:08X}', 'table': f'0x{table:08X}',
            'anchor': f'0x{anchor:08X}', 'element_size': element_size,
            'scale': scale, 'entries': len(targets), 'unique_targets': len(set(targets)),
            'targets': [f'0x{value:08X}' for value in targets]}


def main():
    objects = {}
    for line in SYMBOLS.read_text().splitlines():
        match = OBJECT.match(line)
        if match:
            objects[int(match[1], 16)] = int(match[2], 16)
    image = Image(PE)
    db = sqlite3.connect(DB)
    files = {}
    found = []
    for address, filename, start, end in db.execute(
            'SELECT address,path,start_offset,end_offset FROM assembly_ranges'):
        if filename not in files:
            files[filename] = Path(filename).read_bytes()
        block = files[filename][start:end]
        if b'\tbctr' not in block or not (b'\tlbzx' in block or b'\tlhzx' in block):
            continue
        ins = instructions(block)
        for i, (_, _, mnemonic, _) in enumerate(ins):
            if mnemonic == 'bctr':
                result = recognize(ins, i, objects, image)
                if result:
                    result['jeff_range_start'] = f'0x{address:08X}'
                    found.append(result)
    OUT.write_text(json.dumps(found, indent=2) + '\n')
    print(json.dumps({'strict_relative_tables': len(found),
                      'output': str(OUT)}, indent=2))


if __name__ == '__main__':
    main()
