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
    def dfs(node):
        res = 0
        visited[node] = True
        for ele in adj[node]:
            if not visited[ele]:
                if abs(op[node]-val[ele][0]) > abs(op[node]-val[ele][1]):
                    op[ele] = val[ele][0]
                else:
                    op[ele] = val[ele][1]
                res += abs(op[node] - op[ele])
                res += dfs(ele)
        return res
    for _ in range(int(input())):
        n = int(input())
        val = [list_input() for i in range(n)]
        adj = [[] for i in range(n)]
        uv = []
        for i in range(n-1):
            u, v = map_input()
            u -= 1
            v -= 1
            adj[u].append(v)
            adj[v].append(u)

        op = [-1] * n
        visited = [False] * n
        op[0] = val[0][0]
        q = [0]
        res = 0
        while len(q) > 0:
            node = q.pop(0)
            visited[node] = True
            # print(node, q)
            for ele in adj[node]:
                if not visited[ele]:
                    if abs(op[node]-val[ele][0]) > abs(op[node]-val[ele][1]):
                        op[ele] = val[ele][0]
                    else:
                        op[ele] = val[ele][1]
                    res += abs(op[node] - op[ele])
                    q.append(ele)

        op = [-1] * n
        visited = [False] * n
        op[0] = val[0][1]
        q = [0]
        res1 = 0
        while len(q) > 0:
            node = q.pop(0)
            visited[node] = True
            # print(node, q)
            for ele in adj[node]:
                if not visited[ele]:
                    if abs(op[node]-val[ele][0]) > abs(op[node]-val[ele][1]):
                        op[ele] = val[ele][0]
                    else:
                        op[ele] = val[ele][1]
                    res1 += abs(op[node] - op[ele])
                    q.append(ele)
        print(max(res1, res))


if __name__ == "__main__":
    main()
