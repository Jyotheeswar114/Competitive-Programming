for _ in range(int(input())):
    n = int(input())
    x = input().strip('F')
    if len(x) == 0:
        print("Case #{}: {}".format(_+1, 0))
        continue
    last = x[0]
    ans = 0
    for i in range(1, len(x)):
        if x[i] == 'F' or x[i] == last:
            continue
        else:
            last = x[i]
            ans += 1
    print("Case #{}: {}".format(_+1, ans))
