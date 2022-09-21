n,t=map(int, input().split())

if(t<10):
    for i in range(n):
        print(t,end="")
else:
    if(n==1):
        print(-1)
    else:
        for i in range(n-1):
            print(1,end="")
        print(0)
