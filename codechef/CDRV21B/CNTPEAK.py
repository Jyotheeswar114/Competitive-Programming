from itertools import product
for _ in range(int(input())):
    n = int(input())
    possible = list(product([0,1,2], repeat=n))
    ans = 0
    for p in possible:
        for i in range(1, n - 1):
            if((p[i-1] < p[i] and p[i+1] < p[i]) or (p[i-1] > p[i] and p[i+1] > p[i])):
                ans += 1
    print(ans)