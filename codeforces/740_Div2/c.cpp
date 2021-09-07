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
    lli n, sz;
    lli m, temp;
    vector<pair<lli, lli>> val;
    while (_--)
    {
        val.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> sz;
            m = -1;
            for (int j = 0; j < sz; j++)
            {
                cin >> temp;
                m = max(temp + 1 - j, m);
            }
            val.push_back({m, sz});
        }
        sort(val.begin(), val.end());
        lli k = val[0].first;
        lli ans = k;

        cout << ans << endl;
    }
}