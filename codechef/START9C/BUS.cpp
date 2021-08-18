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
        lli n, m, q, ind;
        char c;
        bool ans = true;
        cin >> n >> m >> q;
        vector<bool> v(n + 1, false);
        int t = 0;
        for (lli i = 0; i < q; i++)
        {
            cin >> c >> ind;
            if (c == '+')
            {
                v[ind] = true;
                t++;
                if (t > m)
                    ans = false;
            }
            else
            {
                if (v[ind] == false)
                    ans = false;
                t--;
                v[ind] = false;
            }
        }
        cout << (ans ? "Consistent" : "Inconsistent")
             << "\n";
    }
}