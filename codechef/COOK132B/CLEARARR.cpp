#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
lli n, k, x;
lli a[5005];
map<tuple<int, int, int>, lli> mp;
lli fun(lli i, lli j, lli t)
{
    if (mp.count({i, j, t}))
        return mp[{i, j, t}];
    // cout << i << " " << j << " " << t << endl;
    if (i > j)
        return 0;
    if (i == j)
        return a[i];
    if (t == 0)
        return mp[{i, j, t}] = min((a[i] + fun(i + 1, j, t)), (fun(i, j - 1, t) + a[j]));
    return mp[{i, j, t}] = min((a[i] + fun(i + 1, j, t)), min((fun(i, j - 1, t) + a[j]), (fun(i + 1, j - 1, t - 1) + x)));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        mp.clear();
        cin >>
            n >> k >> x;
        // for (int i = 0; i < 5005; i++)
        // {
        //     for (int j = 0; j < 5005; j++)
        //     {
        //         dp[i][j] = -1;
        //     }
        // }

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << fun(0, n - 1, k) << endl;
    }
}