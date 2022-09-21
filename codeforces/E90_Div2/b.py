for _ in range(int(input())):
    s = input()
    l = []
    ans = 0
    for i in s:
        if(len(l) and l[-1] != i):
            l.pop()
            ans += 1
        else:
            l.append(i)
    if(ans%2):
        print("DA")
    else:
        print("NET")
