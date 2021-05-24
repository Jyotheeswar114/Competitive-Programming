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
    for _ in range(int(input())):
        n = int(input())
        l = list_input()
        if l == sorted(l):
            print(0)
        elif l[0] == 1 or l[-1] == n:
            print(1)
        elif l[-1] == 1:
            if l[0] == n:
                print(3)
            else:
                print(2)
        else:
            print(2)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
