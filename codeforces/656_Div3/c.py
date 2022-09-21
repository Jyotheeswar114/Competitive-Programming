for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    l = l[::-1]
    j = 0
    while(j+1 < n and l[j] <= l[j+1]):
        j += 1
    while(j+1 < n and l[j] >= l[j+1]):
        j += 1
    print(n-j-1)    
