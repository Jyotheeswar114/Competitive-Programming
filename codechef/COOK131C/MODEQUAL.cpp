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
        lli min_el = *min_element(a.begin(), a.end());
        lli min_count = count(a.begin(), a.end(), min_el);
        bool every = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == min_el)
                continue;
            else if (a[i] <= 2LL * min_el)
            {
                every = true;
                break;
            }
        }
        if (every)
            cout << n << endl;
        else
            cout << n - min_count << endl;
    }
}