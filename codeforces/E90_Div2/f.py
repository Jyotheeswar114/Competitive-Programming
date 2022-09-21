def next(arr, target): 
    start = 0 
    end = len(arr) - 1; 
    ans = -1
    while (start <= end): 
        mid = (start + end) // 2; 
        if (arr[mid] <= target): 
            start = mid + 1 
        else: 
            ans = mid
            end = mid - 1
    if(ans == -1):
        if(arr[-1] == target):
            return len(arr)-1
        else:
            return -1
    if(ans - 1 > -1 and arr[ans-1] == target):
        return ans - 1
    else:
        return ans
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = sorted(list(map(int, input().split())))
    f = 1
    for i in range(n):
        t = next(b, a[i])
        print(b,a)
        print("t",t)
        if(t == -1):
            print("NO")
            f = 0
            break
        if(i < n - 1):
            a[i+1] = a[i+1] - (b[t] - a[i])
        del b[t]
    if(f):
        print("YES")
    else:
        print("NO")
