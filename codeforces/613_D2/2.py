for _ in range(int(input())):
    n=int(input())
    flag=1
    l=list(map(int,input().split()))
    s=[l[0]]
    for i in range(1,n):
        s.append(s[-1]+l[i])
    for i in range(n-1):
        if(s[-1]<=s[i]):
            flag=0
            break
    if(flag):
        for i in range(2,n):
            for j in range(i,n):
                if(s[-1]<=s[j]-s[i-1]):
                    flag=0
