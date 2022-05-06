for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    d = {}
    for i in l:
        try:
            d[i] += 1
        except:
            d[i] = 1
    ans = 0
    for i,v in d.items():
        ans = max(ans, i + v - 1)
    # m = max(l)
    # c = l.count(m)
    # print(m + c -1)
    print(ans)