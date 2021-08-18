#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int mod = 1e9 + 7;
int N = 1e5 + 4;

lli power(long long x, int y, int p)
{
    lli res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    lli ones[N];
    lli sz[N];
    ones[0] = 0;
    ones[1] = 1;
    sz[0] = 1;
    sz[1] = 1;
    for (int i = 2; i < N; i++)
    {
        ones[i] = (ones[i - 1] + ones[i - 2]) % mod;
        sz[i] = (sz[i - 1] + sz[i - 2]) % (mod - 1);
    }

    while (_--)
    {
        int n;
        cin >> n;
        int ans = (ones[n] * (power(2, sz[n] - 1, mod))) % mod;
        cout << ans << endl;
    }
}