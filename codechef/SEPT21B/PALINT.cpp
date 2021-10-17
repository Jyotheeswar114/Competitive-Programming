#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        map<int, pair<int, int>> mp;
        int n, x, t;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mp[t].first++;
            // if (t != 0 || x != 0)
            //     mp[t ^ x].second++;
            if (t != t ^ x)
                mp[t ^ x].second++;
        }
        int mx = -1;
        for (auto x : mp)
        {
            if (mx == -1)
            {
                mx = x.first;
            }
            else
            {
                if (mp[mx].first + mp[mx].second < x.second.first + x.second.second)
                    mx = x.first;
                else if (mp[mx].first + mp[mx].second == x.second.first + x.second.second and mp[mx].second > x.second.second)
                    mx = x.first;
            }
        }
        cout << mp[mx].first + mp[mx].second << " " << mp[mx].second << endl;
    }
}