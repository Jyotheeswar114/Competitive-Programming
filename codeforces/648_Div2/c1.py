n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
db = {b[i]:i for i in range(n)}
l = {}
for i in range(n):
    try:
        l[(i - db[a[i]]+n)%n] += 1
    except KeyError:
        l[(i - db[a[i]]+n)%n] = 1
ans = max(l.values())
print(ans)
