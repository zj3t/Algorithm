#example) fibonacii(4)
    #fibonacii(3) + fibonacii(2)
    #fibonacii(3)
        #fibonacci(2) + fibonacci(1) 
        #fibonacci(2)
            #fibonacci(1) + fibonacci(0) 
        #fibonacci(1) + fibonacci(0)  + fibonacci(1) = 2
def fibonacci(num):
    if num < 2:
        return num
    else:
        return fibonacci(num-1) + fibonacci(num-2)
if __name__ == "__main__":
    N = input()

    print(fibonacci(N))