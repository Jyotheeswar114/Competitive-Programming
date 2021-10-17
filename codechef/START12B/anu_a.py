def solve(n, k, heights):
    def fun(x):
        for j in heights[x+1: x+1+k]:
            if heights[x] <= j:
                return False
        return True
    ans = 0
    for i in range(n):
        if fun(i):
            ans += 1
    print(ans)
