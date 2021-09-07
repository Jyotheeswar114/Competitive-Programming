#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
lli n, x, y;
lli fun(char t, char p)
{
    // cout << "pre - " << present << "  target - " << target << endl;
    if (t == p)
        return 0;
    if ((t == 'W' and p == 'E') or (t == 'E' and p == 'W'))
    {
        return 2 * min(x, y);
    }
    if (t == 'W' and p == 'N')
    {
        return min(x * 3, y);
    }
    if (t == 'W' and p == 'S')
    {
        return min(y * 3, x);
    }
    if (t == 'E' and p == 'N')
        return min(3 * y, x);
    return min(3 * x, y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        cin >> n;
        string s;
        cin >> s;
        cin >> x >> y;
        pair<lli, lli> a[n];
        lli ans = 0;
        for (int i = 0; i < n; i++)
        {
            a[i].first = fun('E', s[i]);
            a[i].second = fun('W', s[i]);
            ans += a[i].second;
        }
        lli prev = ans;
        for (int i = 0; i < n; i++)
        {
            prev -= a[i].second;
            prev += a[i].first;
            ans = min(ans, prev);
        }
        cout << ans << endl;
    }
}