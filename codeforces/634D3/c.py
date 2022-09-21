for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    d = {}
    for i in l:
        try:
            d[i] += 1
        except KeyError:
            d[i] = 1;
    s = len(d)
    ans = 0
    for i,j in d.items():
        ans = max(min(s,j-1),ans)
        ans = max(ans, min(s-1, j))
    print(ans)
