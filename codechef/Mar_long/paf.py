for _ in range(int(input())):
    n,m=map(int,input().split())
    f=list(map(int,input().split()))
    p=list(map(int,input().split()))
    res=[0]*(m+1)
    for i in range(n):
        res[f[i]]+=p[i]
    print(min([i for i in res if(i!=0)]))
