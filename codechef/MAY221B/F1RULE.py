for _ in range(int(input())):
    x, y = map(int, input().split())
    if y <= x*1.07:
        print("yes")
    else:
        print("no")