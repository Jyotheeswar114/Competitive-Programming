for _ in range(int(input())):
    x, y = map(int, input().split())
    if x == y and min(x,y) > 0:
        print("yes")
    else:
        print("no")