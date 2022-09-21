for _ in range(int(input())):
    n = int(input())
    c = 0
    while(n%6 == 0):
        n = n//6
        c += 1
    while(n%3 == 0):
        n = n//3
        c += 2
    if(n == 1):
        print(c)
    else:
        print(-1)
