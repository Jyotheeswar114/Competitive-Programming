for _ in range(int(input())):
    n,k = map(int, input().split())
    l = list(map(int, input().split()))
    l = sorted( [ k-(x%k) for x in l if(x%k != 0)])
    if(len(l)):
        d = {}
        for i in l:
            try:
                d[i] += 1
            except:
                d[i] = 1
        jyo = []
        for i in d.keys():
            jyo.append(i + (d[i]-1) * k)
        print(max(jyo)+1)
    else:
        print(0)
