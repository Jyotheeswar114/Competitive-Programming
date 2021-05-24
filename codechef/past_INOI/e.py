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


adj = []
p = []
n = 0
ans = []


def dfs(node):
    # print(node, "node")
    if len(adj[node]) == 0:
        # ans.append(a[node])
        return False
    temp = []
    for i in adj[node]:
        if dfs(i):
            temp.append(min(a[i], m[i]))
        else:
            temp.append(a[i])
    m[node] = min(temp)
    ans.append(a[node] - m[node])
    return True


def main():
    global n, p, adj, a
    t = list_input()
    n = t[0]
    a = t[1:n+1].copy()
    p = t[n+1:].copy()
    if n == 1:
        print(0)
        return
    for i in range(n):
        p[i] -= 1

    adj = [[] for i in range(n)]
    for i in range(n):
        if p[i] != -2:
            adj[p[i]].append(i)
    global m
    m = [0] * n
    for i in range(n):
        if p[i] == -2:
            dfs(i)
            print(max(ans + [0]))
            return


if __name__ == "__main__":
    # main()
    try:
        main()
        pass
    except:
        pass
