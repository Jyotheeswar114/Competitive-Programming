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
    def give_l(x, y):
        try:
            return l[x][y]
        except:
            return 0

    def get_vaue(x1, y1, x2, y2):
        if x2 > x1:
            return 0
        return max(0, give_l(x1, y1) - give_l(x2, y2))

    def find_value(x, y, z):
        winc = give_l(x-1, 2) + get_vaue(x+y-1, 0, x-1, 0) + \
            get_vaue(n-1, 1, x+y-1, 1)
        losc = give_l(x-1, 1) + get_vaue(x+y-1, 2, x-1, 2) + \
            get_vaue(n-1, 0, x+y-1, 0)
        print(winc, losc)
        return winc > losc
    for _ in range(int(input())):
        n = int(input())
        st = input()
        l = []
        r, p, s = 0, 0, 0
        for i in st:
            if i == 'R':
                r += 1
            elif i == 'P':
                p += 1
            else:
                s += 1
            l.append([r, p, s])
        # print(l)
        ans = 0
        for x in range(0, n+1):
            for y in range(0, n+1):
                z = n - x - y
                ans += int(find_value(x, y, z))
        print(ans)


if __name__ == "__main__":
    main()
    try:
        # main()
        pass
    except:
        pass
