def gcd(a,b):
    if(b==0):
        return a
    return gcd(b, a%b)
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    #print(l)
    a=[1]*n
    for i in range(n-1,-1,-1):
        for j in range(i-1,-1,-1):
            if(a[i]==a[j]):
                if(gcd(l[i],l[j])==1):
                    if(a[i]==11):
                        a[j]=1
                    else:
                        a[j] = a[i]+1
    print(max(a))
    print(*a)
