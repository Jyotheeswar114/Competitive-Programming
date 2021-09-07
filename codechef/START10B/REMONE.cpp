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
        lli n;
        cin >> n;
        vector<lli> a(n);
        lli k = 0;
        for (lli &i : a)
        {
            cin >> i;
            k -= i;
        }
        vector<lli> b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            k += b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        lli ans = 99999999999;
        // if (b[0] - a[0] == b[1] - a[1])
        // {
        //     ans = b[0] - a[0];
        // }
        // else
        // {
        //     ans = b[1] - a[2];
        // }

        // set<lli> c;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     c.insert(b[i] - a[i]);
        // }
        // if (c.size() == 1)
        // {
        //     ans = *c.begin();
        // }
        // else
        // {
        //     ans = b[n - 2] - a[n - 1];
        // }

        // if (n == 2)
        // {
        //     ans = b[0] - a[1] > 0 ? b[0] - a[1] : b[0] - a[0];
        //     // cout << "HEllo\n";
        // }

        for (int i = 0; i < n; i++)
        {
            if ((k + a[i]) % (n - 1) == 0 and (k + a[i]) / (n - 1) > 0)
                ans = min((k + a[i]) / (n - 1), ans);
        }

        cout << ans << endl;
    }
}