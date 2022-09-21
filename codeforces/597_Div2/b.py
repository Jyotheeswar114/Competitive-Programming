from math import ceil
for _ in range(int(input())):
    n = int(input())
    r,p,s = map(int, input().split())
    g = input()
    t = min(r, g.count('S')) + min(p, g.count('R')) + min(s, g.count('P'))
    if(t < ceil(n/2)):
        print("NO")
    else:
        print("YES")
        r1 = 0
        p1 = 0
        s1 = 0
        l = ['f'] * n
        for i in range(n):
            if(g[i] == 'R' and p):
                l[i] = 'P'
                p -= 1
            elif(g[i] == 'S' and r):
                l[i] = 'R'
                r -= 1
            elif(g[i] == 'P' and s):
                l[i] = 'S'
                s -= 1
        #print(*l, sep = "")
        for i in range(n):
            if(l[i] == 'f'):
                if(p > 0):
                    l[i] = 'P'
                    p -= 1
                elif(r > 0):
                    l[i] = 'R'
                    r -= 1
                elif(s > 0):
                    l[i] = 'S'
                    s -= 1
        print(*l,sep = "")
