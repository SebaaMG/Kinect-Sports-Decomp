#!/usr/bin/env python3
"""Import community XDK FID hits as provenance-tagged hints, never as matches."""
import csv
from pathlib import Path
import sqlite3

from lab_paths import LAB
DB = LAB / 'analysis/full-game-export/progress.sqlite'
TSV = LAB / 'analysis/full-game-export/fid-scan.tsv'


def main():
    db = sqlite3.connect(DB)
    db.execute('''CREATE TABLE IF NOT EXISTS fid_candidates (
      address INTEGER PRIMARY KEY, current_name TEXT NOT NULL,
      fid_name TEXT NOT NULL, score REAL NOT NULL,
      library TEXT NOT NULL, match_count INTEGER NOT NULL,
      source TEXT NOT NULL DEFAULT 'xdksetupxenon9328.fidb')''')
    rows = []
    with TSV.open(newline='') as stream:
        for hit in csv.DictReader(stream, delimiter='\t'):
            rows.append((int(hit['address'], 16), hit['current_name'], hit['fid_name'],
                         float(hit['score']), hit['library'], int(hit['match_count'])))
    with db:
        db.executemany('''INSERT INTO fid_candidates(address,current_name,fid_name,score,library,match_count)
          VALUES(?,?,?,?,?,?) ON CONFLICT(address) DO UPDATE SET
          current_name=excluded.current_name,fid_name=excluded.fid_name,
          score=excluded.score,library=excluded.library,match_count=excluded.match_count''', rows)
    unique = db.execute('SELECT COUNT(*) FROM fid_candidates WHERE match_count=1').fetchone()[0]
    print(f'Imported {len(rows)} FID hints; {unique} have exactly one database candidate.')


if __name__ == '__main__':
    main()
