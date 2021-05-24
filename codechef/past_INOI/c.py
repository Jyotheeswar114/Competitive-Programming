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
    n = int(input())
    l = [list_input() for _ in range(n)]
    ans = [0, 0, 0, 0]
    # 0 1 2
    temp = 0
    for i in range(n):
        temp += l[i][0]
        ans[0] = max(ans[0], temp + l[i][1] + l[i][2])
    # 2 1 0
    l2 = sorted(l, key=lambda x: x[1] + x[2])
    temp = 0
    for i in range(n):
        temp = max(temp, l2[i][1] + l2[i][2])
        temp += l2[i][0]
        ans[1] = max(ans[1], temp)

    # 1 0 2
    l2 = sorted(l, key=lambda x: x[1])
    temp = 0
    for i in range(n):
        temp = max(temp, l2[i][1])
        temp += l2[i][0]
        ans[2] = max(ans[1], temp + l2[i][2])

    # 2 0 1
    l2 = sorted(l, key=lambda x: x[2])
    temp = 0
    for i in range(n):
        temp = max(temp, l2[i][2])
        temp += l2[i][0]
        ans[3] = max(ans[1], temp + l2[i][1])
    # print(ans)
    print(min(ans))


if __name__ == "__main__":
    try:
        main()
    except:
        pass
