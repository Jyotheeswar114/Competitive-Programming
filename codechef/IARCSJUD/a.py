p1 = 0
p2 = 0
l1 = 0
l2 = 0
for i in range(int(input())):
    s,t = map(int, input().split())
    p1 += s
    p2 += t
    if(p1 > p2):
        l1 = max(l1, p1 - p2)
    elif(p2 > p1):
        l2 = max(l2, p2 - p1)
if(l1 > l2):
    print(1,l1)
else:
    print(2,l2)
