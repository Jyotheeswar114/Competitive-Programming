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
    n, k = map_input()
    k -= 1
    l = list_input()
    if n == 1:
        print(0)
        return
    inf = 99999999999
    d = [inf] * n
    d[k] = 0
    if k != n-1:
        d[k+1] = l[k+1]
        for i in range(k+2, n):
            d[i] = l[i] + max(d[i-1], d[i-2])

    # print(d)
    d1 = [inf] * n
    d1[0] = l[0]
    d1[1] = l[0] + l[1]
    for i in range(2, n):
        d1[i] = l[i] + max(d1[i-1], d1[i-2])
    # print(d1)
    m = d[k] + d1[k] - l[k]
    for i in range(k+1, n):
        m = max(d[i] + d1[i] - l[i], m)
    print(m)


if __name__ == "__main__":
    # main()
    try:
        main()
    except:

        pass
