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
        lli x, y;
        cin >> x >> y;
        if (gcd(x, y) > 1)
        {
            cout << 0;
        }
        else if (gcd(x + 1, y) > 1 or gcd(x, y + 1) > 1)
        {
            cout << 1;
        }
        else
            cout << 2;
        cout << "\n";
    }
}