from math import ceil
n,t = map(int, input().split())
l = []
for i in range(n):
    a,d = map(int, input().split())
    while(a < t):
        a += d
    l.append(a)
print(l.index(min(l))+1)
#print(l)
