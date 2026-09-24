#!/usr/bin/env bash
set -euo pipefail

if [[ $# -ne 1 || ! $1 =~ ^(0[xX])?[0-9a-fA-F]{8}$ ]]; then
  echo 'Uso: scripts/decompile.sh 0x82230000' >&2
  exit 2
fi

project_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source "$project_root/scripts/lab-root.sh"
ghidra_root="${GHIDRA_ROOT:-$lab_root/tools/ghidra_12.1.3_PUBLIC}"
headless="$ghidra_root/support/analyzeHeadless"
project_dir="$lab_root/analysis"

if [[ ! -x $headless || ! -f $project_dir/KinectSports.gpr ]]; then
  echo 'Falta Ghidra o el proyecto KinectSports; revisa GHIDRA_ROOT y KINECT_LAB_ROOT.' >&2
  exit 1
fi

# Read-only keeps this query separate from the Ghidra analysis project.
"$headless" "$project_dir" KinectSports \
  -process default.xex -readOnly -noanalysis \
  -scriptPath "$project_root/tools" \
  -postScript DecompileOne.java "$1" 2>&1 \
  | sed -n '/DecompileOne.java> DECOMP_ADDRESS=/,/DecompileOne.java> DECOMP_C_END/p; /ERROR Abort due to Headless analyzer error:/p'
