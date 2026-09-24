#!/usr/bin/env bash
# Export C for a Jeff address/size list with the Xbox 360 Xenon language.
set -euo pipefail
if [[ $# -lt 1 || $# -gt 2 ]]; then
  echo 'Uso: scripts/decompile_vmx.sh address-size-list.txt [output-directory]' >&2
  exit 2
fi
root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source "$root/scripts/lab-root.sh"
ghidra_root="${GHIDRA_ROOT:-$lab_root/tools/ghidra_12.1.3_xenon}"
input="$1"
output="${2:-$lab_root/analysis/vmx-c}"
if [[ ! -f "$input" || ! -f "$lab_root/analysis-xenon/KinectSportsXenonRaw.gpr" ]]; then
  echo 'Falta la lista o el proyecto Xenon importado.' >&2
  exit 1
fi
mkdir -p "$output"
"$ghidra_root/support/analyzeHeadless" "$lab_root/analysis-xenon" KinectSportsXenonRaw \
  -process default.xex -readOnly -noanalysis -scriptPath "$root/tools" \
  -postScript DecompileBatch.java "$input" "$output" \
    --mask-save-helper-calls --export-pcode 2>&1 \
  | rg 'BATCH_DONE=|ERROR Abort due to Headless analyzer error:'
