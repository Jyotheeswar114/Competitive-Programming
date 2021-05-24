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
    for _ in range(int(input())):
        n, k = map_input()
        s = input()
        l = []
        half_len = (n + n % 2)//2
        for i in range(half_len):
            # print(ord(s[i]), ord(s[-i-1]))
            l.append(ord(s[i]) - ord('a'))
        ans = 0
        p = 1
        mod = 10**9 + 7
        # print(l)
        for j in l[::-1]:
            ans = (ans + (j*p) % mod) % mod
            p = (p * k) % mod
        if n % 2 == 1:
            ans = ans + (s[:half_len] + s[:half_len-1][::-1] < s)
        else:
            ans = ans + (s[:half_len] + s[:half_len][::-1] < s)

        print("Case #", _+1, ": ", ans % mod, sep="")


if __name__ == "__main__":
    # main()
    try:
        main()
        pass
    except:
        pass
