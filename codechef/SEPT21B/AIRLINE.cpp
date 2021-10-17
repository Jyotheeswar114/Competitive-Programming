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
        vector<int> a(3);
        int s = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a.begin(), a.end());
        int d, e;
        cin >> d >> e;
        // for (int i = 0; i < 3; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        if (a[1] > e and e >= a[0])
        {
            s -= a[0];
            // cout << "HELLO\n";
        }
        else if (a[2] > e and e >= a[1])
        {
            s -= a[1];
        }
        else if (a[2] <= e)
        {
            s -= a[2];
        }
        else
        {
            cout << "NO\n";
            continue;
        }
        // cout << "s - " << s << endl;
        string ans = (s <= d) ? "YES" : "NO";
        cout << ans << endl;
    }
}