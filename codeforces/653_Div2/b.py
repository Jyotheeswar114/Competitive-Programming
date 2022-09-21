for _ in range(int(input())):
    n = int(input())
    o,e = 0,0
    l = list(map(int, input().split()))
    for i in range(n):
        if(i%2 != l[i]):
            if(i%2 == 0):
                o += 1
            else:
                e += 1
    if(o == e):
        print(o)
    else:
        print(-1)
