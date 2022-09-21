from math import ceil
for _ in range(int(input())):
    a,b,c,d = map(int,input().split())
    if(b>=a):
        print(b)
    elif((d-c) >= 0):
        print(-1)
    else:
        print(ceil((a-b)/(c-d))*c+b)

