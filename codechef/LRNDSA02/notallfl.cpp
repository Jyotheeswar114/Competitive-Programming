#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 1;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l[k + 1];
        for (int i = 0; i <= k; i++)
        {
            l[i] = -1;
        }
        l[a[0]] = 0;
        int st = 0;
        for (int i = 1; i < n; i++)
        {
            if (l[a[i]] == -1)
                l[a[i]] = i;
            else
            {
                if (st <= l[a[i]])
                {
                    ans = (ans < i - st) ? i - st : ans;
                    st = i;
                    l[a[i]] = i;
                }
                else
                {
                    l[a[i]] = i;
                }
            }
        }
        ans = (ans < n - st) ? n - st : ans;
        cout << ans << endl;
    }
}