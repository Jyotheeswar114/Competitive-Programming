for _ in range(int(input())):
    n,x = map(int, input().split())
    l = sorted(list(map(int, input().split())))
    i = n-1
    ans = 0
    while(i > -1):
        m = l[i]
        j = 1
        while(i > -1 and l[i]* j < x):
            i -= 1
            j += 1
        if(i != -1):
            ans += 1
        i -= 1
    print(ans)
