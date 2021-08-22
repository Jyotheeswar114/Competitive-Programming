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
        lli n, temp;
        cin >> n;
        map<lli, lli> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            mp[temp]++;
        }
        lli mx = 1e10;
        for (auto x : mp)
        {
            // cout << x.first << " " << x.second << "\n";
            mx = min(mx, n - x.second);
        }
        if (n <= 2)
        {
            mx = 0;
        }
        else if (mx == n - 1)
        {
            mx = n - 2;
        }
        cout << mx << endl;
    }
}