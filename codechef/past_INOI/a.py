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


def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x


def main():
    c, f = map_input()
    inf = 9999999999999
    d = [[inf for i in range(c)] for j in range(c)]
    for i in range(c):
        d[i][i] = 0
    for _ in range(f):
        x, y, w = map_input()
        d[x-1][y-1] = d[y-1][x-1] = w
    for k in range(c):
        for i in range(c):
            for j in range(c):
                d[i][j] = min(d[i][j], d[i][k] + d[k][j])
    m = d[0][0]
    for i in range(c):
        for j in range(c):
            if d[i][j] == inf:
                continue
            m = max(d[i][j], m)
    print(m)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
