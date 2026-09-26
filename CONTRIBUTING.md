# Contributing

Kinect Sports is being reconstructed one function at a time. The C already in `src/auto_match/` comes largely from Ghidra. It gives you a place to start; objdiff shows what your changes actually match.

## Set up

Place `default.xex` from your own copy of the game as shown in the [README](README.md), then run `python3 configure.py`. You will need the Xbox 360 compiler, Jeff, objdiff and, on Linux, Wibo. Build the original object for the function you choose; a full `ninja` build is not needed for each iteration. Keep game files and generated objects out of commits.

## Work on a function

Choose a function in `src/auto_match/` whose entry in `config/4D5308C9/objects.json` is `NonMatching`. Work on a separate branch so others can work on different functions at the same time. Read its C, the corresponding assembly in `build/4D5308C9/asm/auto_match/`, and its object in objdiff.

Build the original object once, then compile and compare just your function as you iterate:

```sh
ninja build/4D5308C9/obj/auto_match/func_82400E48.obj
python3 scripts/evaluate_candidate.py 0x82400E48 src/auto_match/func_82400E48.c \
  --compiler /path/to/X360/16.00.10224.00/cl.exe \
  --cflags /nologo /c /TC /O1
```

The evaluator prints the code match and saves the full objdiff result under the local lab directory. Set `WIBO` and `OBJDIFF_CLI` if those tools are not on your `PATH`. Try `/O2` when the assembly suggests a different optimization setting. Inspect objdiff's instruction and relocation differences before calling a function complete.

For a function that has no split yet, run `python3 scripts/isolate_functions.py 0xADDRESS`, reconfigure, and build its original object. Ghidra can supply the first C version. `scripts/prepare_full_game_task.py` can also package Ghidra C and assembly if you have generated the local analysis database.

## Send the result

Commit the source, and include any split or object configuration changes the function needs. Keep a partial result as `NonMatching`; mark it `Matching` after the object matches completely. In your pull request, give the address, compiler flags, objdiff result and any useful type or class findings. A compilable improvement is worth sharing even if it is not a full match.

The checked-in progress report is generated from a configured build with `scripts/update_progress.sh`. It is refreshed when changes reach `main`.
