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
    O_ind = mod * mod
    X_ind = mod * mod
    l = 0
    for i in range(n):
        if x[i] == 'X':
            X_ind = l
            temp = i
            break
        if x[i] == 'O':
            O_ind = l
            temp = i
            break
        if x[i] == '.':
            l += (l + 1)
        l += 1
    if min(O_ind, X_ind) == mod * mod:
        print("Case #{}: {}".format(_+1, 0))
        continue
    last = [min(O_ind, X_ind), temp]
    # dp = [0] * (last[0] + 1)
    prev = 0
    ans = 0
    switches = 0
    for i in range(temp + 1, n):
        if x[i] == 'F':
            ans = (ans + prev) % mod
            last[0] += 1
            continue
        if x[i] == '.':
            prev = prev + ans + switches * (last[0] + 1)
            ans = (2 * ans + ans * (last[0] + 1) +
                   switches * (last[0] + 1)) % mod
            last[0] += (last[0] + 1)
            switches *= 2
            continue
        if x[last[1]] != x[i]:
            switches += 1
            prev += last[0] + 1
            ans = (ans + prev + last[0] + 1) % mod
            last[1] = i
            last[0] += 1
        else:
            last[1] = i
            last[0] += 1
            # dp.append(dp[-1])
            ans = (ans + prev) % mod
    print("Case #{}: {}".format(_+1, ans))
