mod = 10**9 + 7
for _ in range(int(input())):
    n = int(input())
    x = input()
    try:
        O_ind = x.index('O')
    except:
        O_ind = mod
    try:
        X_ind = x.index('X')
    except:
        X_ind = mod
    last = min(O_ind, X_ind)
    if last == mod:
        print("Case #{}: {}".format(_+1, 0))
        continue
    l_temp = last
    dp = [0] * (last + 1)
    for i in range(l_temp + 1, n):
        if x[i] == 'F':
            dp.append(dp[-1])
            continue
        if x[last] != x[i]:
            dp.append((dp[last] + last + 1) % mod)
            last = i
        else:
            last = i
            dp.append(dp[-1])
    ans = 0
    for i in dp:
        ans = (ans + i) % mod
    print("Case #{}: {}".format(_+1, ans))
