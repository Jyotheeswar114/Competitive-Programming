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
        lli n, m, x, y;
        cin >> n >> m >> x >> y;
        lli ans = 10000000000000;
        if ((n - 1 + m - 1) * x > 0)
            ans = (n - 1 + m - 1) * x;
        if ((max(n, m) - min(n, m)) * x + (min(n, m) - 1) * y > 0)
            ans - min(ans, (max(n, m) - min(n, m)) * x + (min(n, m) - 1) * y);
        if ((n == 1 && m == 1) || ans == 10000000000000)
        {
            ans = 0;
        }

        cout << ans << "\n";
    }
}