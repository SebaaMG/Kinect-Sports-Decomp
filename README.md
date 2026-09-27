# Kinect Sports Decomp

A matching decompilation of **Kinect Sports** for Xbox 360.

## Target

| | |
| --- | --- |
| Game | Kinect Sports |
| Title ID | `4D5308C9` |
| Media ID | `655F2429` |
| Tested `default.xex` SHA-256 | `46388258eddee0cff4753da6c426c99a80d05d65ee38403b65ac21e86a03cf01` |

## Progress

| Measure | Current |
| --- | ---: |
| Function ranges indexed by Jeff | 57,731 |
| Functions with Ghidra C | 57,614 |
| Functions with matching code | 5,367 |
| Matched code | 186,656 / 15,705,500 (1.18848%) |
| Fully linked code | 16,196 / 15,705,500 (0.10312%) |
| Units with source | 52,184 |
| Fuzzy match | 39.53458% |

## Getting started

Place `default.xex` from your own copy of the game at `orig/4D5308C9/default.xex`. Install Python 3 and Ninja, then configure the [Jeff](https://github.com/rjkiv/jeff) build:

```sh
python3 configure.py
ninja
```

On Linux, use `python3 configure.py --wrapper /path/to/wibo` if Wibo is not already configured. `python3 configure.py --help` lists the available tool paths.

## Contributing

Start with a function in `src/auto_match/` and compare changes with objdiff. See [CONTRIBUTING.md](CONTRIBUTING.md) for the matching workflow.

## Credits

Based on [jeff-template](https://github.com/rjkiv/jeff-template), [GhidraXenon](https://github.com/freeqaz/ghidra-xenon-extension), [objdiff](https://github.com/encounter/objdiff) and the [Dance Central 3 decomp](https://github.com/freeqaz/dc3-decomp).
