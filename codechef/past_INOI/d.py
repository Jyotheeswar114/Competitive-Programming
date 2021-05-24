from typing import Tuple


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


d = {}


def related(s, k):
    global d
    temp = 0
    for i in s:
        try:
            if d[i]:
                temp += 1
            if temp == k:
                for j in s:
                    d[j] = True
                return True
        except:
            pass
    return False


def main():
    global d
    n, k = map_input()
    l = [list_input()[1:] for i in range(n)]
    d = {i: True for i in l[0]}
    l.pop(0)
    ans = 1
    ago = True
    while len(l) > 0 and ago:
        ago = False
        p = []
        for i in range(len(l)):
            if related(l[i], k):
                ago = True
                ans += 1
                # print(l[i])
            else:
                p.append(i)
        l = [l[i] for i in p]
    print(ans)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
