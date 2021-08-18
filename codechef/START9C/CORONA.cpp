#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
lli INF = 1e15;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        lli n, m, k;
        lli x, y, w;
        cin >> n >> m >> k;
        vector<pair<lli, lli>> hc(k);
        vector<pair<lli, lli>> adj[n + 1];
        for (lli i = 0; i < k; i++)
        {
            cin >> hc[i].first >> hc[i].second;
        }
        for (lli i = 0; i < m; i++)
        {
            cin >> x >> y >> w;
            adj[x].push_back(make_pair(y, w));
            adj[y].push_back(make_pair(x, w));
        }
        priority_queue<pair<lli, lli>> q;
        vector<lli> dist(n + 1, INF);
        vector<bool> visited(n + 1, false);
        for (lli i = 0; i < k; i++)
        {
            dist[hc[i].first] = hc[i].second;
            q.push(make_pair(-hc[i].second, hc[i].first));
        }
        while (!q.empty())
        {
            pair<lli, lli> t = q.top();
            q.pop();
            if (visited[t.second])
                continue;
            visited[t.second] = true;
            for (auto u : adj[t.second])
            {
                lli b = u.first, w = u.second;
                if (dist[t.second] + w < dist[b])
                {
                    dist[b] = dist[t.second] + w;
                    q.push(make_pair(-dist[b], b));
                }
            }
        }
        for (lli i = 1; i < n + 1; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;
        hc.clear();
    }
}