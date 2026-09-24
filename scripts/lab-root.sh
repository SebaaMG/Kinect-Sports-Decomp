#!/usr/bin/env bash
# Source this file to set lab_root from the environment or a local marker.
lab_project_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
if [[ -n ${KINECT_LAB_ROOT:-} ]]; then
  lab_root="$KINECT_LAB_ROOT"
elif [[ -f "$lab_project_root/.lab-root" ]]; then
  IFS= read -r lab_root < "$lab_project_root/.lab-root"
else
  lab_root="$HOME/KinectSportsLab"
fi
export KINECT_LAB_ROOT="$lab_root"
