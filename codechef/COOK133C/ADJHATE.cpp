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
        lli n, tmp;
        cin >> n;
        lli a[n];
        vector<lli> o;
        vector<lli> e;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
                o.push_back(a[i]);
            else
                e.push_back(a[i]);
        }
        lli pra = (o.size() - e.size());
        if (-1 <= pra && pra <= 1)
        {
            if (o.size() < e.size())
            {
                cout << e[e.size() - 1];
                e.pop_back();
                for (int i = 0; i < o.size(); i++)
                {
                    cout << " " << o[i];
                    cout << " " << e[i];
                }
            }
            else if (o.size() > e.size())
            {
                cout << e[o.size() - 1];
                o.pop_back();
                for (int i = 0; i < o.size(); i++)
                {
                    cout << " " << e[i];
                    cout << " " << o[i];
                }
            }
            else
            {
                for (int i = 0; i < o.size(); i++)
                {
                    cout << " " << e[i];
                    cout << " " << o[i];
                }
            }
        }
        else
            cout << -1;
        cout << endl;
    }
}