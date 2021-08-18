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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] == 1)
        {
            cout << n + 1 << " ";
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else if (a[n - 1] == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << n + 1 << " ";
        }
        else
        {
            int flag = -1;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == 0 and a[i + 1] == 1)
                {
                    flag = i + 1;
                    break;
                }
            }
            if (flag == -1)
                cout << -1;
            else
            {
                for (int i = 1; i <= flag; i++)
                {
                    cout << i << " ";
                }
                cout << n + 1 << " ";
                for (int i = flag + 1; i < n + 1; i++)
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
}