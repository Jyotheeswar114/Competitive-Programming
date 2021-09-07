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
        int n, k, l;
        cin >> n >> k >> l;
        int a[n];
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        int pora = max(a[n - 1], a[n - 1] + k * (l - 1));
        if (a[n - 1] == m)
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == m)
                    c++;
            }
            if (c == 1)
                cout << "Yes\n";
            else
            {
                if (pora > m)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
        }

        else if (pora > m)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}