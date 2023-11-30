#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    arg = sys.argv
    size = len(arg) - 1

    if size > 1:
        print(f"{size} arguments:")
        for i in range(1, size + 1):
            print(f"{i}: {arg[i]}")

    elif size == 0:
        print(f"{size} arguments.")

    else:
        print("{size} argument:")
        print(f"{size}: {arg[1]}")
