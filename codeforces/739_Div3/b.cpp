#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _, ans;
    cin >> _;
    lli a, b, c, n;
    while (_--)
    {
        cin >> a >> b >> c;
        n = abs(a - b);
        if (2 * n < a or 2 * n < b or 2 * n < c)
            cout << -1;
        else
        {
            ans = c + n;
            if (ans > 2 * n)
                ans -= (2 * n);
            cout << ans;
        }
        cout << endl;
    }
}