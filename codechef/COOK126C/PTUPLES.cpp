#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    int sz = 1000001;
    // cout << "HEllo";
    // int p[sz];
    vector<lli> p(sz);
    p[0] = p[1] = false;
    lli c[sz];
    // cout << "HEllo";
    lli count = 0;

    for (int i = 2; i < sz; i++)
    {
        p[i] = true;
    }
    for (int i = 2; i < 1001; i++)
    {
        for (int j = i * i; j < sz; j += i)
        {
            p[j] = false;
        }
    }
    for (int i = 3; i < sz; i++)
    {
        if (p[i] and p[i - 2])
            count++;
        c[i] = count;
    }
    // cout << "HEllo\n";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        lli n;
        cin >> n;
        // cout << (c[n] * (c[n] - 1) * (c[n] - 2)) / 6 << endl;
        cout << c[n] << "\n";
    }
}