for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    if(l[0] < l[1]):
        f = 1
    else:
        f = 0
    ans = [l[0]]
    for i in range(1,n):
        if(f==0):
            if(l[i-1]>=l[i]):
                continue
            else:
                f = 1
                ans.append(l[i-1])
        else:
            if(l[i-1] < l[i]):
                continue
            else:
                f = 0
                ans.append(l[i-1])
    ans.append(l[n-1])
    print(len(ans))
    print(*ans,sep = " ")
