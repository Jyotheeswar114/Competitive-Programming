for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    s = 0
    i = 0
    while(i<n):
        c,j = l[i],i
        while(j < n and (l[i]/abs(l[i])) == (l[j]/abs(l[j]))):
            c = max(c, l[j])
            j+=1
        s+=c
        i = j - 1
        i+=1
    print(s)

