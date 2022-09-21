def sod(n):
    s = 0
    while(n):
        s = s + n%10
        n = n//10
    return s
for _ in range(int(input())):
    n = int(input())
    c,m = 0,0
    for i in range(n):
        a,b = map(int, input().split())
        a,b = sod(a), sod(b)
        if(a > b):
            c += 1
        elif(a < b):
            d += 1
        else:
            c += 1
            d += 1
        print(c,d)
    if(c > d):
        print(0,c)
    elif(c < d):
        print(1,d)
    else:
        print(2,c)
