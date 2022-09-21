for _ in range(int(input())):
    n,k = map(int, input().split())
    if(n&1):
        ans = 0
        for i in range(3,n+1,2):
            if(n%i == 0):
                ans = i
                break
        print(n+2*(k-1)+ans)
    else:
        print(n+2*k)
