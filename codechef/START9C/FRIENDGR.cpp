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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int last = -(1e6);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i - last <= k + 1)
                {
                    last = min(last + k, i + 1);
                }
                else
                {
                    ans++;
                    last = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
}