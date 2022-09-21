from math import ceil
for _ in range(int(input())):
    a,b = map(int, input().split())
    x,y = 0,0
    while(a%2==0):
        x+=1
        a//=2
    while(b%2==0):
        y+=1
        b//=2
#    print(a,b)
    if(a == b):
        print(ceil(abs(x-y)/3))
    else:
        print(-1)
