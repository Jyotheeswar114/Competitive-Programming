#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < (n - i) * a[i])
            ans = (n - i) * a[i];
    }
    cout << ans << endl;
}