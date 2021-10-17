def maxTowers(n=5, m=3, x=4, connections=[[0, 1], [2, 1], [2, 3]]):
    adj = [[] for _ in range(n)]
    for i in range(len(connections)):
        adj[connections[i][0]].append(connections[i][1])
        adj[connections[i][1]].append(connections[i][0])
    visited = [False for _ in range(n)]

    def dfs(x):
        if visited[x]:
            return 0
        visited[x] = True
        c = 1
        for e in adj[x]:
            c = c + dfs(e)
        return c
    v_c = []
    for i in range(n):
        c = dfs(i)
        if c != 0:
            v_c.append(c)
    # print(v_c)
    ans = 0
    for c in v_c:
        if x <= 0:
            break
        if x >= c:
            x = x-c
            ans += c
    return ans


print(maxTowers())
