#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        int s, p, v;
        cin >> s >> p >> v;
        int ans = (p / (s + 1)) * v;
        while (n--)
        {
            cin >> s >> p >> v;
            int temp = (p / (s + 1)) * v;
            ans = (ans < temp) ? temp : ans;
        }
        cout << ans << endl;
    }
}