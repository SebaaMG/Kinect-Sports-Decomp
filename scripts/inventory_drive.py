#!/usr/bin/env python3
"""Read-only inventory of Kinect Sports XEX files on the mounted Xbox drive."""

from __future__ import annotations

import argparse
import os
import hashlib
import json
from datetime import datetime, timezone
from pathlib import Path


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def main() -> None:
    project = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser()
    parser.add_argument("--drive", type=Path,
                        default=Path(os.environ.get("KINECT_GAME_DRIVE",
                                                    str(Path.home() / "KinectSportsDrive"))))
    args = parser.parse_args()
    drive = args.drive.resolve()
    if not drive.is_dir():
        parser.error(f"Drive is not mounted: {drive}")
    games = [drive / "Juegos/KinectSports", drive / "Juegos/KinectSports2"]
    entries = []
    for game in games:
        if not game.is_dir():
            continue
        for path in sorted(game.rglob("*")):
            if path.is_file() and path.suffix.lower() == ".xex":
                entries.append(
                    {
                        "relative_path": str(path.relative_to(drive)),
                        "size_bytes": path.stat().st_size,
                        "sha256": digest(path),
                    }
                )
    manifest = {
        "drive": str(drive),
        "created_utc": datetime.now(timezone.utc).isoformat(),
        "files": entries,
    }
    output = project / "orig/manifest.json"
    output.parent.mkdir(exist_ok=True)
    output.write_text(json.dumps(manifest, indent=2) + "\n")
    print(f"Inventoried {len(entries)} XEX files; private manifest: {output}")
    for entry in entries:
        print(f"{entry['relative_path']}: {entry['sha256'][:12]} ({entry['size_bytes']} bytes)")


if __name__ == "__main__":
    main()
