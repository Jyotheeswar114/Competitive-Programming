n,k = map(int, input().split())
l = list(map(int, input().split()))
d = {}
for i in range(n):
    d[i] = l[i]
#print(d)
for u,v in sorted(d.items(), key = lambda kv:(kv[1], kv[0]),reverse = True):
    if(len(d) > k):
        del d[u]
    else:
        break
l = list(d.values())
print(l)
print(min(max(l[::2]), max(l[1::2])))
