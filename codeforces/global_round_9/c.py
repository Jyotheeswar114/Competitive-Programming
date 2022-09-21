for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    s = []
    for i in l:
        t = i
        while(len(s) > 0 and s[-1] < i):
            #t = s[-1]
            t = s.pop()
        s.append(t)
    if(len(s) == 1):
        print("YES")
    else:
        print("NO")
