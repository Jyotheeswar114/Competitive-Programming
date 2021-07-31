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
        map<lli, lli> freq;
        for (lli i = 0; i < n; i++)
        {
            lli el;
            cin >> el;
            freq[el]++;
        }
        lli ans = 0;
        for (auto [el, fre_el] : freq)
        {
            ans += min(el - 1, fre_el);
        }
        cout << ans << endl;
    }
}