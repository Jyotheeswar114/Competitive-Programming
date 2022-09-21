for _ in range(int(input())):
    n,a,b,c,d = map(int, input().split())
    if(n*(a-b) in range(c-d,c+d+1) or n*(a+b) in range(c-d, c+d+1) or c-d in range(n*(a-b),n*(a+b)+1) or c+d in range(n*(a-b), n*(a+b)+1)):
        print("Yes")
    else:
        print("No")
