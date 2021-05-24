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
        k = int(input())
        g = gcd(k, 100-k)
        print(k//g + (100-k)//g)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
