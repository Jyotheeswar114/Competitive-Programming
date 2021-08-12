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
        lli n, k;
        cin >> n >> k;
        vector<pair<lli, lli>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        lli ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1].second + 1 != v[i].second)
                ans++;
        }
        cout << ((ans <= k) ? "YES" : "NO") << endl;
    }
}