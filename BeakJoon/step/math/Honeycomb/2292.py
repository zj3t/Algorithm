if __name__ == "__main__":
    # 1  --> 1
    # 2 3 4 5 6 7 --> 6 
    # 8 9 10 11 12 13 14 15 16 17 18 19 --> 12
    # 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 --> 18
    # (1 + 6*0) + ((1 + 6*0) + 6*1) + ((1 + 6*0) + 6*1 + 6*2) + ( (1 + 6*0) + 6*1 + 6*2 + 6*3)
    # ... 1 + 6 + 12 + 18 + 24 
    # 6x(0) + 6x(1) + 6x(2) + 6x(3)

    #공식 1 ==>1+3*(x*(x-1)) 
    #공식 2 ==> 6(x-1)
    # --> 1 + 6(N*(N)/2)
    # ex) case N is 4 ==> 1 + 6((4*(4))/2) == 1 + 
    N = int(input())
    x = 1
    while True:
        if N <= 3*(x*(x-1)) + 1 and N > 3*(x*(x-1)) - 6*(x-1):
            break
        x += 1


    print(x)
