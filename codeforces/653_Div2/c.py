from math import ceil
for _ in range(int(input())):
    n,k = map(int, input().split())
    s = input()
    a = []
    for i in range(n):
        if(s[i] == '1'):
            a.append(i)
    ans = 0
    #print(a,len(a))
    if(len(a)):
        if(a[0]-k>0):
            ans += (ceil((a[0]-k)/(k+1)))
        #print(ans)
        for i in range(0,len(a)-1):
            #ans += ((a[i+1] - a[i] - 1)//(2*k + 1))
            ans += ((a[i+1] - a[i] - 1-k)//(k + 1))
            #print(i,ans)
        if(n-1 - a[-1] - k > 0):
            ans += (ceil((n-1 - a[-1]-k)/(k + 1)))
       # print(ans)
    else:
        ans = ceil(n/(k+1))
    print(ans)
