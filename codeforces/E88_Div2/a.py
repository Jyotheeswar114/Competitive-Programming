from math import ceil
for _ in range(int(input())):
    n,m,k = map(int, input().split())
    if(m <= n/k):
        print(m)
    else:
        print(int(n/k - ceil((m-n/k)/(k-1))))
