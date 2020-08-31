import sys

if __name__ == "__main__":
    N = int(input())
    sugar = 0

    while N > 0:
        if N % 5 == 0:
            N = N - 5
            sugar += 1

        elif N % 3 == 0:
            N = N - 3
            sugar += 1

        elif N > 5:
            N = N - 5
            sugar += 1

        else:
            sugar = -1
            break

    print(sugar)

