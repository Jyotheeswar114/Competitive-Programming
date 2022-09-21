n,m = map(int, input().split())
x,k,y = map(int, input().split())
a = list(map(int, input().split()))
d = {a[x]:x for x in range(n)}
b = list(map(int, input().split()))
jyo = [d[x] for x in b]
if(jyo != sorted(jyo)):
    print(-1)
else:
    s = 0
    if(jyo[0] !=0):
        s += (min(
