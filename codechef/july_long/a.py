try:
    for _ in range(int(input())):
        n = int(input())
        sum = 0
        l = list(map(int, input().split()))
        for i in range(n-1):
            a,b = min(l[i],l[i+1]),max(l[i],l[i+1])
            sum += (b-a-1)
        print(sum)
except:
    pass
