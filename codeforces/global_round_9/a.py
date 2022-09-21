for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    for i in range(n):
        if(i%2 == 0):
            print(abs(l[i]), end = " ")
        else:
            print(-abs(l[i]),end = " ")
    print()
