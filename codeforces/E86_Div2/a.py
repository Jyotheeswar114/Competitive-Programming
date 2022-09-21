for _ in range(int(input())):
    x,y = map(int, input().split())
    a,b = map(int, input().split())
    x,y = max(x,y),min(x,y)
    print(min(a*(x+y), (x-y)*a + y*b))
