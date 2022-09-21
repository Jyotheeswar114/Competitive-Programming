def mex(l):
    for i in range(len(l)):
        if(l[i] == 0):
            return i
for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    b = [0] *(n+1)
    for i in l:
        b[i] += 1
    f = 0
    ans = []
    for i in range(n):
        for j in range(i, n):
            if(l[j] == i):
                ans.append(j+1)
                b[l[j]] -= 1
                l[j] = mex(b)
        b[i] = 1
    print(len(ans))
    print(*ans,sep = " ")
