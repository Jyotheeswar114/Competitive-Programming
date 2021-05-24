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


def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)

# Function to return LCM of two numbers


def lcm(a, b):
    return (a / gcd(a, b)) * b


def main():
    for _ in range(int(input())):
        a, b = map_input()
        if b == 1:
            print("NO")
        else:
            print("YES")
            if b == 2:
                print(a, a * 3, a*4)
            else:
                print(a, a*(b-1), a * b)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
