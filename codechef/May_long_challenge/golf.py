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


def main():
    for _ in range(int(input())):
        n, x, k = map_input()
        if x in range(0, n+2, k) or x in range(n+1, -1, -k):
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    try:
        main()
    except:
        pass
