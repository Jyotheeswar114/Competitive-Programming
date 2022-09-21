for _ in range(int(input())):
    n,x,m = map(int, input().split())
    l,r = -1,-1
    for i in range(m):
        tl,tr = map(int, input().split())
        if(l == -1):
            if(x in range(tl,tr+1)):
                l,r = tl, tr
        else:
            if(tl in range(l,r+1) or tr in range(l,r+1) or 
                    l in range(tl,tr+1) or r in range(tl, tr+1)):
                l = min(l, tl)
                r = max(r, tr)
    print(r-l+1)
