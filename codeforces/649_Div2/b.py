for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    i = 0
    ans = [1]*n
    while(i <= n-3):
        if(l[i] < l[i+1] and l[i+1] < l[i+2]):
            ans[i+1] = 0
            i += 2
        elif(l[i] > l[i+1] and l[i+1] > l[i+2]):
            ans[i+1] = 0
            i += 2
        else:
            i += 1
    print(sum(ans))
    for i in range(n):
        if(ans[i]):
            print(l[i],end= " ")
    print()
