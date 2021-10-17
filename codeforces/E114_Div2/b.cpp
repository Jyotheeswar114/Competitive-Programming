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
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        int mx = a - 1 + b - 1 + c - 1;
        int mn;
        vector<int> l = {a, b, c};
        sort(l.begin(), l.end());
        if (l[2] > l[0] + l[1])
        {
            mn = l[2] - 1 - l[0] - l[1];
        }
        else
        {
            mn = max()
        }
    }
}