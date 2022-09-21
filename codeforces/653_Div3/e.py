n, k = map(int, input().split())
both = []
x = []
y = []
for i in range(n):
    t,a,b = map(int, input().split())
    if(a == 1 and b == 1):
        both.append(t)
    elif(a == 1 and b == 0):
        x.append(t)
    elif(a == 0 and b == 1):
        y.append(t)
if(min(len(x), len(y)) + len(both) != k):
    print(-1)
else:
    both.sort()
    x.sort()
    y.sort()
    for i in range(1,len(both)):
        both[i] += both[i-1]
    for i in range(1,len(x)):
        x[i] += x[i-1]
    for i in range(1,len(y)):
        y[i] += y[i-1]
    ans = 10**18
    if(len(x) >= k and len(y) >= k):
        ans = x[k-1] + y[k-1]
    for i in range(len(both)):
        kk = k-i-1
        if(kk<1):
            break
        if(len(x) >= k and len(y) >= k):
            ans = min(ans, both[i]+x[kk-1]+y[kk-1])
    
    if(k <= len(both)):
        ans = min(ans, both[k-1])
    if(ans - 10**18):
        print(ans)
    else:
        print(-1)
