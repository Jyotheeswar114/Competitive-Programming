import sys
file = open("tabs.in")
sys.stdin = file


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
        n, k = map_input()
        if n == 1:
            print(0)
        elif k == 1 or k == n:
            print(1)
        else:
            print(2)


if __name__ == "__main__":
    try:
        main()
    except:
        pass

file.close()
