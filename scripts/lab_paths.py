"""Resolve the local, untracked analysis directory."""

import os
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def lab_root() -> Path:
    configured = os.environ.get("KINECT_LAB_ROOT")
    if configured:
        return Path(configured).expanduser()
    marker = ROOT / ".lab-root"
    if marker.is_file():
        return Path(marker.read_text(encoding="utf-8").strip()).expanduser()
    return Path.home() / "KinectSportsLab"


LAB = lab_root()
