# Ghidra C compilation pilot

Tested on 2026-09-24 against Kinect Sports retail `4D5308C9` with X360 MSVC `16.00.10224.00`, `/O2`, Jeff split objects, and `objdiff-cli`. Source files, generated objects, and diff JSON are kept in the local lab under `compiler-probe/`.

| Function | Original size | Ghidra C as exported | With minimal declarations and Jeff symbol name | Code match |
| --- | ---: | --- | --- | ---: |
| `0x82FA5958` | 8 B | Fails: `longlong` is undeclared | Compiles; 8 B output | 100.0% |
| `0x8225F1B8` | 516 B | Fails: `undefined4` is undeclared | Compiles with one external data declaration; 496 B output | 82.09% |
| `0x82400E48` | 448 B | Fails: Ghidra types and external symbols are undeclared | Compiles with type and external declarations; 456 B output | 80.79% |

The medium function emits six incompatible pointer comparison warnings. The constructor emits one pointer assignment warning. The external declarations are provisional and are sufficient for compilation, not verified signatures or types. Renaming `Jeff_<address>` to Jeff's `fn_<address>` only allows objdiff to pair the symbols; it does not change the function body.

The tiny function is an exact code match, but its 8 bytes do not establish that the inferred prototype is correct. The two medium examples demonstrate a useful automatic seed, not completed reconstruction. Code match is distinct from relocation matching and behavioral equivalence; neither latter property was established here.

## Xbox 360 register-save helper correction

Jeff's assembly shows `bl __savegprlr_29` in the prologue of `0x82400E48`. Ghidra treated it as a normal call returning the object pointer. The optional `--mask-save-helper-calls` mode in `DecompileBatch.java` replaces only verified relative `bl` instructions to `__savegprlr_14` through `_31` with `nop` in a **read-only, disposable Ghidra session**. It does not alter the original XEX or Jeff objects. It is a decompiler aid, not a claimed equivalent executable patch.

The corrected C uses the first parameter as the object pointer. The false `FUN_82f68b7c()` call disappears. The same correction recovered the first parameter in `0x82363840` and `0x82486278`. Re-exporting all 111 Boxing-reference candidates masked seven such calls and completed 111/111. With identical provisional declarations and `/O2`, the constructor's code match rose from **80.79% to 87.11%**, and its output size changed from 456 to the original 448 bytes. Other type and address problems remain.

An optional `--type-known-floats` experiment gave the constant at `0x821CC160` its Jeff-supported `float` type, and Ghidra then emitted `float` instead of `undefined4`. However, the surrounding object is still typed as `undefined4 *`, so the generated C converts that float to an integer on assignment. Under `/O1`, this reduced the constructor's code match from **92.36% to 90.20%** and increased the object from 448 to 456 bytes. Do not enable this option in the batch exporter until the object field at offset `0x280` is also typed as `float`. This illustrates why decompiler improvements must be checked against compiled output.

A second optional `--type-boxing-camera` experiment modeled a 0x360-byte object with a `float` at offset `0x280` and assigned the constructor's four register arguments. Ghidra then emitted readable `self->field_*` assignments and a real float store. The provisional C compiled to the correct 448-byte length, but code match fell to **78.41%** under `/O1`. The inferred signature and other field types are not yet proven; this structured version is retained only as an analysis experiment. A complete type pass needs caller/callee evidence and compiler feedback before becoming the default export.

## Compiler option pilot

The six-function corpus covers arithmetic, string initialization with loops, a constructor, nested string comparisons, conditional state logic, and floating-point code. These are provisional Ghidra-derived candidates; low match may reflect incorrect C or types as well as compiler settings.

| Function | Category | `/O1` | `/O2` |
| --- | --- | ---: | ---: |
| `0x82FA5958` | arithmetic, 8 bytes | 100.00% | 100.00% |
| `0x8225F1B8` | initialization and loops | 88.91% | 82.09% |
| `0x82400E48` | constructor, corrected prologue | 92.36% | 87.11% |
| `0x82486A20` | nested string comparisons | 53.51% | 18.86% |
| `0x823653E0` | conditional state logic | 71.05% | 53.37% |
| `0x82456A08` | floating-point state update | 87.08% | 86.67% |

`/Od` gave 0% in the first three probes. On the two medium functions, `/O2 /Os` equaled `/O1`, while `/O1 /Ot` equaled `/O2`. This points to size-oriented optimization as the important difference in this sample. It does **not** establish the original global build flags or compiler version for every object. Keep `/O1` as the first candidate and retain `/O2` as a per-function alternative. The expanded flag matrices and source candidates are private in `compiler-probe/`.

## Candidate evaluation

`python3 scripts/evaluate_candidate.py 0x82400E48 /path/to/candidate.c --cflags /nologo /c /TC /O1` creates a separate local run directory, compiles the candidate, runs objdiff against the isolated Jeff object, and returns JSON with warnings, function sizes, and code match. The candidate must define `fn_<ADDRESS>`.

`python3 scripts/prepare_match_task.py 0x82400E48` creates a per-run workspace with `original.s`, `ghidra.c`, and `task.json`. Write `candidate.c` there and run the evaluation command recorded in `task.json`. Inspect relocations and other unresolved differences before calling a function complete, even when code match reaches 100%.

The next compilation pass can add known type aliases and declarations from the symbol and type databases to exported C, then record warnings and objdiff results for each candidate. Validate prototypes, relocations and behavior before marking work complete.
