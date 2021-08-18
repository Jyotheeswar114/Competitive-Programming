#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
lli ans[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _, n;
    cin >> _;
    lli j = 0;
    for (int i = 1; i < 5000 && j < 1000; i++)
    {
        if (!(i % 3 == 0 or i % 10 == 3))
            ans[j++] = i;
    }

    while (_--)
    {
        cin >> n;
        cout << ans[n - 1] << endl;
        ;
    }
}