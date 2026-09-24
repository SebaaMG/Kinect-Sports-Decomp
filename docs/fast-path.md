# Matching workflow

The target is Kinect Sports retail `default.xex` (`4D5308C9`, Media ID `655F2429`). Jeff supplies function boundaries, assembly and split objects. Ghidra supplies initial C and cross references. The local analysis ledger connects them by address.

## Prepare a function

Choose a function from the ledger and create a task packet:

```sh
python3 scripts/next_match_tasks.py --count 20 --max-size 4096
python3 scripts/prepare_full_game_task.py 0x82400E48
python3 scripts/isolate_functions.py 0x82400E48
```

The packet records the selected C revision, original assembly, quality flags and original object. Isolated objects keep objdiff iterations short.

## Compile and compare

Write a candidate in `src/`, using the function name and address from the packet. Build it with the Xbox 360 MSVC compiler and compare it against Jeff's object:

```sh
python3 scripts/evaluate_candidate.py 0x82400E48 path/to/candidate.c \
  --cflags /nologo /c /TC /O1
```

Try compiler settings on representative functions before applying them broadly. The six-function compiler experiment is recorded in [ghidra-compile-pilot.md](ghidra-compile-pilot.md). A function is matched when a rebuild and objdiff reproduce its code; the current verified example is `src/compiler_probe/add.c`.

## Parallel work

Assign separate objects or functions to separate worktrees. Share type and class-layout findings through source changes and task records. Integrate a reconstructed function with its compiler command and objdiff result. Switch tables, overlapping boundaries and opaque vector operations appear in task quality flags so they can be investigated independently.

Real Xbox 360 and Kinect traces can help resolve behavior and runtime structures. Static code matching can proceed from the executable and local tools.
