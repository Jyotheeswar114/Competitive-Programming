n = int(input())
l = list(map(int, input().split()))
ans = []
d = [False] * 202000
for i in l:
    d[i] = True
for i in range(202000):
    if(not(d[i])):
        ans.append(i)
lp = 1
print(ans[0],end = " ")
for i in range(1,n):
    if(l[i]!=l[i-1]):
        print(l[i-1],end = " ")
    else:
        print(ans[lp],end = " ")
        lp += 1
print()
