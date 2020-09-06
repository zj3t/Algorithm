if __name__ == "__main__":
    N = input()
    
    a = 0
    b = 1
    if N is 0:
        print(0)
    elif N is 1:
        print(1)
    else:
        for i in range(0, N-1):
            c = a + b
            #print c
            a = b
            b = c
        print(c)