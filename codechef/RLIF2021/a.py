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
    a, b = map_input(2)
    print(a+b, a-b, a*b, round(a/b, 1), sep="\n")


if __name__ == "__main__":
    try:
        main()
    except:
        pass
