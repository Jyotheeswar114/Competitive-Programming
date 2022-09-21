for _ in range(int(input())):
    a,b,n,m = map(int, input().split())
    if(m < min(a,b) and (n+m) <= (a+b)):
        print("Yes")
    else:
        print("No")
