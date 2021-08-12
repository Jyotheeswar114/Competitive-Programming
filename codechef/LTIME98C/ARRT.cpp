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
        lli n;
        cin >> n;
        vector<lli> a(n);
        for (lli &i : a)
            cin >> i;
        vector<lli> b(n);
        for (lli &i : b)
            cin >> i;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, (a[i] + b[i]) % n);
        }
    }
}