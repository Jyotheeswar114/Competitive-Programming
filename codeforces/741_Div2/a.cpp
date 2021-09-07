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
        int r, l;
        cin >> l >> r;
        int b = (r % 2 == 0) ? r / 2 + 1 : (r + 1) / 2;
        int ans = (r == l) ? 0 : (r - l < l) ? r % l
                                             : r % b;
        cout << ans << "\n";
    }
}