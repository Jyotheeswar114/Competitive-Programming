for _ in range(int(input())):
    n = int(input())
    s = input()
    pre = s[0]
    d = {pre: True}
    f = "Yes"
    for i in s[1:]:
        if pre != i:
            pre = i
            if d.get(i) != None:
                f = "No"
                break
            else:
                d[i] = True
    print(f)
