#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
lli INF = 999999999999;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, k, s;
    cin >> n >> k >> s;
    s--;
    lli a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    lli pora;
    vector<pair<lli, lli>> adj[k];
    lli temp;
    // cout << "HEllo\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> pora;
            if (pora != -1)
                adj[a[i]].push_back({j, pora});
        }
    }
    priority_queue<pair<lli, lli>> q;
    lli dist[k];
    for (int i = 0; i < k; i++)
    {
        dist[i] = INF;
    }
    dist[a[s]] = 0;
    vector<bool> processed(k, false);
    q.push({0, a[s]});
    while (!q.empty())
    {
        lli _a = q.top().second;
        q.pop();
        if (processed[_a])
            continue;
        processed[_a] = true;
        for (auto u : adj[_a])
        {
            lli b = u.first, w = u.second;
            if (dist[_a] + w < dist[b])
            {
                dist[b] = dist[_a] + w;
                q.push({-dist[b], b});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == INF)
        {
            cout << -1 << " ";
        }
        else
            cout << dist[a[i]] << " ";
    }
    cout << endl;
}