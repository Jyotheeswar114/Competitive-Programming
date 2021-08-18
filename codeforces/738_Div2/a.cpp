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
        int ans, temp;
        cin >> ans;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> temp;
            ans = ans & temp;
        }
        cout << ans << endl;
    }
}