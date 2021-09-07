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
        vector<lli> a(n);
        lli neg = 0;
        for (lli &i : a)
        {
            cin >> i;
            if (i < 0)
                neg++;
        }
        k = min(k, neg);
        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++)
        {
            a[i] *= -1;
        }
        int ans = 0;
        for (lli &i : a)
        {
            if (i > 0)
            {
                ans += i;
            }
        }
        cout << ans << endl;
    }
}