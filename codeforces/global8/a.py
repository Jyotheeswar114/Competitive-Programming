for _ in range(int(input())):
    a,b,n = map(int, input().split())
    if(a>b):
        a,b = b,a
    ans = 0
    while(b <= n):
        a,b = b,a+b
        ans += 1
    print(ans)
