if __name__ == "__main__":

    A,B,V = input().split()
    V = int(V)
    A = int(A)
    B = int(B)

    if (V-B)  % (A-B) != 0:
        x = int((V-B)/(A-B)) + 1
    else:
        x = int((V-B)/(A-B))

    print(x)