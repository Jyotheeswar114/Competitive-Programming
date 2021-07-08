#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int prev, pres, ans = 1;
        cin >> prev;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> pres;
            ans += (prev >= pres);
            prev = prev > pres ? pres : prev;
        }
        cout << ans << endl;
    }
}