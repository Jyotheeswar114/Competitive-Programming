for _ in range(int(input())):
    n, m, a, b = map(int, input().split())
    if min(a, b) < (n + m - 1):
        print("Case #{}: Impossible".format(_+1))
        continue
    mxab = max(a, b)
    ans = [[1000 for i in range(m)] for j in range(n)]
    pora_a = (a - m)//(n-1)
    pora_b = (b - m)//(n-1)
    for i in range(m):
        ans[0][i] = 1
    for i in range(1, n):
        ans[i][0] = pora_b
        ans[i][-1] = pora_a
    ans[-1][-1] += (a - m) % (n - 1)
    ans[0][-1] += (b - m) % (n - 1)
    print("Case #{}: Possible".format(_+1))
    for i in range(n):
        print(*ans[i])
