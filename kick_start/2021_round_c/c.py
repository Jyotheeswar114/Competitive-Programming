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


def sorted_indices(s):
    li = []
    for i in range(len(s)):
        li.append([s[i], i])
    li.sort()
    return [x[1] for x in li]

# https://www.geeksforgeeks.org/floor-in-a-sorted-array/


def floorSearch(arr, x, low=-1, high=-1):
    if low == -1:
        low = 0
    if high == -1:
        high == len(arr) - 1
    if (low > high):
        return -1
    if (x >= arr[high]):
        return high
    mid = int((low + high) / 2)
    if (arr[mid] == x):
        return mid
    if (mid > 0 and arr[mid-1] <= x
            and x < arr[mid]):
        return mid - 1
    if (x < arr[mid]):
        return floorSearch(arr, low, mid-1, x)
    return floorSearch(arr, mid + 1, high, x)


def find_index(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1


def floyd_warshell(g):
    n = len(g)
    d = g.copy()
    for k in range(n):
        for i in range(n):
            for j in range(n):
                d[i][j] = min(d[i][j], d[i][k] + d[k][j])
    return d


def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x


def main():
    total = 0
    t = int(input())
    x = int(input())
    for _ in range(t):
        w, e = map_input()
        mr, ms, mp = 0, 0, 1
        print("Case #", _+1, ": ", sep="", end="")
        print("P", end="")
        for i in range(2, 61):
            r_prob = ms/(i-1)
            p_prob = mr/(i-1)
            s_prob = mp/(i-1)
            # rock
            r_value = s_prob * w + r_prob * e
            p_value = r_prob * w + p_prob * e
            s_value = p_prob * w + s_prob * e
            l = [(r_value, "R"), (p_value, "P"), (s_value, "S")]
            momo = max(l)
            print(momo[1], end="")
            if momo[1] == "R":
                mr += 1
            elif momo[1] == "P":
                mp += 1
            else:
                ms += 1
            total += momo[0]
        print()
    # print(total)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
