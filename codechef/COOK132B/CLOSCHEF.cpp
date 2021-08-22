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
        int n, pora;
        cin >> n;
        vector<int> a(5, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> pora;
            if (pora >= -1 and pora <= 1)
            {
                a[pora + 1]++;
            }
            else if (pora > 0)
                a[3]++;
            else
                a[4]++;
        }
        int ans = 1;
        if ((a[3] > 1) or (a[0] > 1 and a[2] == 0) or (a[0] > 0 and (a[4] > 0 or a[3] > 0)))
        {
            ans = 0;
        }
        cout << ans << endl;
    }
}