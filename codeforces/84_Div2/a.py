#!/usr/bin/env python3cd
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


def give_excel_column_name(r: int):
    l = 1
    r -= 1
    ans: str = ""
    while 26**l <= r:
        r -= 26**l
        l += 1
    while l > 0:
        ans += (chr(ord('A') + r//26**(l-1) % 26))
        l -= 1
    return ans


def give_excel_column_number(name: str):
    p = 1
    ans: int = 0
    for j in range(len(name)):
        ans = ans + p * ((ord(name[j]) - ord('A')) + 1)
        p = p * 26
    return ans


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


def int_input(type=1):
    if type == 1:
        return int(input())
    elif type == 2:
        return float(int(input()))


def range_input():
    return range(int_input())


def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x


def main():
    n = int_input()
    t = 0
    while n > 0:
        if n % 10 == 7 or n % 10 == 4:
            t += 1
        n = n // 10
    ans = "YES"
    if t == 0:
        ans = "NO"
    # print(t)
    while t > 0:
        if t % 10 != 7 and t % 10 != 4:
            ans = "NO"
            break
        t = t//10
    print(ans)


if __name__ == "__main__":
    try:
        main()
    except:
        pass
