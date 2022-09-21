for _ in range(int(input())):
    n = int(input())
    la,lb = map(int, input().split())
    if(la < lb):
        flag = "NO"
    else:
        flag = "YES"
    for i in range(n-1):
        a,b = map(int, input().split())
        if(la > a or lb > b or a < b):
            flag = "NO"
        la,lb = a,b
    print(flag)
