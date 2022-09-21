a,b,c,d = map(int, input().split())
ans = 0
l1 = b-a+1
for z in range(c, d+1):
    if((c-z+b) > 0 and l1 > 0):
        k = min(c-z+1, l1)
        ans = ans + (k*(k+1))/2
        if(b-
        if(k1 > l1):
            ans = ans + (k1-b+a-1)*l1
    print(ans)
print(ans)
