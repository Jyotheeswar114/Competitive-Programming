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
    power = [1]
    for i in range(1, 10**5 + 2):
        power.append((power[-1] * 2) % (10**9 + 7))
    for _ in range(int(input())):
        n = int(input())
        if n == 0:
            print(1)
        else:
            print(power[n-1])


if __name__ == "__main__":
    try:
        main()
    except:
        pass


c
