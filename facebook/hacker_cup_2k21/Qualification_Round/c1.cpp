#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
vector<int> adj[55];
vector<bool> visited;
vector<int> values;
vector<int> c;
int dfs(int x)
{
    if (visited[x])
        return 0;
    visited[x] = true;
    int ans = 0;
    for (auto u : adj[x])
    {
        if (!visited[u])
            ans = max(ans, dfs(u));
    }
    return ans + c[x];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    for (int cas = 1; cas <= _; cas++)
    {
        int ans;
        visited.clear();
        c.clear();
        values.clear();
        lli n;
        cin >> n;
        int pora;
        for (int i = 0; i < n; i++)
        {
            cin >> pora;
            c.push_back(pora);
            adj[i].clear();
            visited.push_back(false);
        }
        for (int i = 0, u, v; i < n - 1; i++)
        {
            cin >> u >> v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        visited[0] = true;
        for (auto x : adj[0])
        {
            values.push_back(dfs(x));
        }
        if (n == 1)
        {
            ans = c[0];
        }
        else
        {
            if (values.size() == 1)
            {
                ans = c[0] + values[0];
                // cout << "HEllo" << endl;
            }
            else
            {
                sort(values.begin(), values.end(), greater<>());
                ans = c[0] + values[0] + values[1];
                // cout << "Values ";
                // for (auto m : values)
                // {
                //     cout << m << " ";
                // }
                // cout << endl;
            }
        }
        cout << "Case #" << cas << ": " << ans << endl;
    }
}