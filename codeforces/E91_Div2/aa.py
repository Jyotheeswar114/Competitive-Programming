for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    left = [-1]
    s = [0]
    for i in range(1,n):
        while(len(s) > 0 and l[i] < l[s[-1]]):
            s.pop()
        if(len(s) > 0):
            left.append(s[-1])
        else:
            left.append(-1)
        s.append(i)
    right = [-1]*n
    s = [n-1]
    for i in range(n-2,-1,-1):
        while(len(s) > 0 and l[i] < l[s[-1]]):
            s.pop()
        if(len(s) > 0):
            right[i] = s[-1]
        s.append(i)
    flag = 1
    for i in range(n):
        if(left[i] != -1 and right[i] != -1):
            print("YES")
            print(left[i]+1,i+1,right[i]+1)
            flag = 0
            break
    if(flag == 1):
        print("NO")
