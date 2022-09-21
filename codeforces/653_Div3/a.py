for _ in range(int(input())):
    x,y,n = map(int, input().split())
    ans = ((n-y)//x) * x
    print(ans + y)
