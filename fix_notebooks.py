"""
Run this before pushing:   python fix_notebooks.py

Why: GitHub shows code from *Python* notebooks without escaping "<", so
#include<iostream>, cout<<, vector<int> etc. get swallowed and the cell
looks empty. Marking each notebook's language as C++ makes GitHub
display it as proper, colour-highlighted C++ instead.

Colab still runs the notebook exactly the same (it always uses the Python
kernel). Colab switches the label back to Python when you download again,
so just run this script every time before you push.
"""
import json
from pathlib import Path

root = Path(__file__).resolve().parent
fixed = 0

for nb_path in root.rglob("*.ipynb"):
    if ".ipynb_checkpoints" in nb_path.parts:
        continue
    nb = json.loads(nb_path.read_text(encoding="utf-8"))
    info = nb.setdefault("metadata", {}).setdefault("language_info", {})
    if info.get("name") != "c++":
        info["name"] = "c++"
        nb_path.write_text(json.dumps(nb, indent=2, ensure_ascii=False) + "\n",
                           encoding="utf-8")
        print("fixed:", nb_path.relative_to(root))
        fixed += 1

print(f"done ({fixed} notebook(s) updated)")
