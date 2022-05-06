for _ in range(int(input())):
    n, x, y = map(int, input().split())
    ans = 2 * (n - 1) + min(x, y) - 1 + n - max(x,y) + min(x-1 , n - y) + min(n - x, y - 1)
    print(ans)