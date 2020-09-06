if __name__ == "__main__":

    A,B,C = input().split()
    A = int(A)
    B = int(B)
    C = int(C)

    if B >= C:
        Break_Event_Point = -1
    else:
        Break_Event_Point = int(A/(C-B) + 1)
        
    print(Break_Event_Point)