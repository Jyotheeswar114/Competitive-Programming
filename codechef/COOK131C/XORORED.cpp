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
        lli AND = -1;
        lli n;
        cin >> n;
        vector<lli> a(n);
        for (lli &i : a)
        {
            cin >> i;
            AND = AND & i;
        }
        lli min = 0;
        for (lli i = 0; i < n; i++)
        {
            min = min | (a[i] ^ AND);
        }
        cout << AND << " " << min << endl;
    }
}