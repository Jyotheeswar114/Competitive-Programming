T = int(input())
for T1 in range(T):
    n = int(input())
    a = []
    b = []
    maxy = n
    maxcount = 0
    for i in range(n):
        inp = input()
        a.append(inp)
        if "O" not in inp:
            dotcount = inp.count(".")
            if dotcount < maxy:
                maxy = dotcount
                maxcount = 1
            elif dotcount == maxy:
                maxcount += 1
    for i in range(n):
        inp = [j[i] for j in a]
        # print(inp, inp.count("."))
        b.append(inp)
        if "O" not in inp:
            dotcount = inp.count(".")
            if dotcount < maxy:
                maxy = dotcount
                maxcount = 1
            elif dotcount == maxy:
                maxcount += 1
            # if dotcount
            #     print("".join(inp), a[i], "".join(inp) == a[i])
            # if dotcount == 1 and "".join(inp) == a[i]:
                # if (dotcount == 1 or (dotcount == n-1 and a[i][i] == 'X')) and "".join(inp) == a[i]:
                # maxcount -= 1
            if a[i][i] == '.' and "".join(inp) == a[i] and '.' not in a[i][:i]+a[i][i+1:]:
                maxcount -= 1
    if maxcount > 0:
        print("Case #{}: {} {}".format(T1+1, maxy, maxcount))
    else:
        print("Case #{}: Impossible".format(T1+1))
