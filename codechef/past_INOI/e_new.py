def map_input(type=1):
    if type == 1:
        return map(int, input().split())
    elif type == 2:
        return map(float, input().split())
    elif type == 3:
        return map(str, input().split())
    return None


def list_input(type=1):
    return list(map_input(type))


def floyd_warshell(g):
    n = len(g)
    d = g.copy()
    for k in range(n):
        for i in range(n):
            for j in range(n):
                d[i][j] = min(d[i][j], d[i][k] + d[k][j])
    return d


def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x


big = 102030
inp = [0] * big
mini = [0] * big
p = [0] * big
arr = [0] * big


def main():
    t = list_input()
    n = t[0]
    global arr, mini, p, inp
    arr = t[1:n+1].copy()
    mini = arr.copy()
    p = t[n+1:].copy()
    for i in range(n):
        if p[i] + 1 != 0:
            inp[p[i] - 1] += 1
        p[i] -= 1
    q = [i for i in range(n) if inp[i] == 0]
    while len(q) > 0:
        i = q.pop(0)
        if p[i] == -2:
            continue
        inp[p[i]] -= 1
        mini[p[i]] = min(mini[p[i]], mini[i])
        if inp[p[i]] == 0:
            q.append(p[i])
    maxi = 0
    for i in range(n):
        maxi = max(maxi, arr[i] - mini[i])
    print(maxi)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
