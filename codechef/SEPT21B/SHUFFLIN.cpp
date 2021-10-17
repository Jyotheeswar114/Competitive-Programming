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
        int n, t;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t & 1)
                odd++;
            else
                even++;
        }
        int ans = min(odd, n / 2) + min(even, (n + 1) / 2);
        cout << ans << endl;
    }
}