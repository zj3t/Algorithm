def star(n):
    s = [[0 for col in range(n)] for row in range(n)]
    for row in range(n):
        for col in range(n):
            if n/2 == row and n/2 == col:
                s[row][col] = ' '
            else:
                s[row][col] = '*'

    result = ''
    for i in range(n):
        for j in range(n):
            result += s[i][j]
        result+='\n'
    print result
    
if __name__ == "__main__":
    N = input()
    star(N)