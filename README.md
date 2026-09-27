# Kinect Sports Decomp

A decompilation of **Kinect Sports** for Xbox 360.

## Supported version

| | |
| --- | --- |
| Title ID | `4D5308C9` |
| Media ID | `655F2429` |
| `default.xex` SHA-256 | `46388258eddee0cff4753da6c426c99a80d05d65ee38403b65ac21e86a03cf01` |

## Progress

| Measure | Current |
| --- | ---: |
| Function ranges indexed by Jeff | 57,731 |
| Functions with Ghidra C | 57,614 |
| Functions with matching code | 6,114 |
| Matched code | 237,056 / 15,705,500 (1.50938%) |
| Fully linked code | 223,208 / 15,705,500 (1.42121%) |
| Units with source | 52,575 |
| Fuzzy match | 41.54307% |

## Building

Place `default.xex` from your copy of the game in `orig/4D5308C9/`. Install Python 3 and Ninja, then run:

```sh
python3 configure.py
ninja
```

On Linux, pass `--wrapper /path/to/wibo` to `configure.py` if Wibo is not already configured. Run `python3 configure.py --help` for other tool paths.

## Contributing

Pick a function in `src/auto_match/` and compare changes with [objdiff](https://github.com/encounter/objdiff). See [CONTRIBUTING.md](CONTRIBUTING.md) for build and submission instructions.
