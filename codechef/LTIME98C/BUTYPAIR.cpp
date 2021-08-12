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
        for (lli &i : a)
            cin >> i;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        lli ans = 0;
        for (auto i : m)
            ans += (n - i.second) * i.second;
        cout << ans << endl;
    }
}