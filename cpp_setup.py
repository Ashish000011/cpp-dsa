import argparse, shlex, subprocess, sys
from IPython.core.magic import register_cell_magic

@register_cell_magic
def cpp(line, cell):
    p = argparse.ArgumentParser(prog="%%cpp", add_help=False)
    p.add_argument("name", nargs="?", default="scratch")
    p.add_argument("-i", "--input", default="")
    try:
        a = p.parse_args(shlex.split(line))
    except SystemExit:
        return
    src, exe = f"{a.name}.cpp", f"./{a.name}"
    with open(src, "w") as f:
        f.write(cell)
    b = subprocess.run(["g++", "-std=c++17", "-Wall", src, "-o", exe],
                       capture_output=True, text=True)
    if b.stderr:
        print(b.stderr, file=sys.stderr)
    if b.returncode != 0:
        return
    try:
        r = subprocess.run([exe], input=a.input.replace("\\n", "\n"),
                           capture_output=True, text=True, timeout=10)
    except subprocess.TimeoutExpired:
        print("Stopped after 10 seconds (infinite loop?)")
        return
    print(r.stdout, end="")
    if r.stderr:
        print(r.stderr, file=sys.stderr, end="")
