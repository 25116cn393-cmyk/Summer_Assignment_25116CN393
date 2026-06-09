for i in range(5):
    print(" " * (4 - i), end="")

    for j in range(i + 1):
        print(chr(65 + j), end="")

    for j in range(i - 1, -1, -1):
        print(chr(65 + j), end="")

    print()