for _ in range(int(input())):
    n,m = map(int, input().split())
    l = []
    colb = [False]*m
    rowb = [False]*n
    row = 0
    col = 0
    for i in range(n):
        l.append(tuple(map(int,input().split())))
        for j in range(m):
            if(l[i][j] == 1):
                colb[j] = 1
                rowb[i] = 1
    for i in range(n):
        if(rowb[i]==0):
            row+=1
    for i in range(m):
        if(colb[i]==0):
            col+=1
    row = min(row, col)
    if(row&1):
        print("Ashish")
    else:
        print("Vivek")
