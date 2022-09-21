n,m = 0, 0
def fun(a,b):
    if((a == 0 or a == n-1) and (b == 0 or b == m-1)):
        return 2
    elif(a == 0 or a == n-1 or b == 0 or b == m-1):
        return 3
    return 4
for _ in range(int(input())):
    n,m = map(int, input().split())
    s = []
    flag = 1
    for i in range(n):
        s.append(list(map(int, input().split())))
    t = [[0 for i in range(m)] for j in range(n) ]
    for i in range(n):
        for j in range(m):
            t[i][j] = fun(i,j)
            if(s[i][j] > t[i][j]):
                flag = 0
    if(flag == 0):
        print("NO")
    else:
        print("YES")
        for i in range(n):
            print(*t[i],sep = " ")
