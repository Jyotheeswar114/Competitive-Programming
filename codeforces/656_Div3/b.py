for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    d = [False]*(n+1)
    ans = []
    for i in l:
        if(d[i] == False):
            ans.append(i)
            d[i] = True
    print(*ans, sep = " ")
