for _ in range(int(input())):
    n,x = map(int, input().split())
    l = list(map(int, input().split()))
    flag = 1
    for i in l:
        if(i%x):
            flag = 0
    if(flag):
        print(-1)
    else:
        if(sum(l)%x):
            print(n)
        else:
            j = 0
            while(l[j]%x==0):
                j += 1
            k = n-1
            while(l[k]%x == 0):
                k-=1
            print(max(n-j-1, k))
