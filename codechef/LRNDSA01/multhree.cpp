#include <bits/stdc++.h>
using namespace std;

#define lli long long int

lli power_mod(lli x, lli y, lli m)
{
    lli result = 1;
    while (y)
    {
        if (y % 2)
            result = (result * x) % m;
        x = (x * x) % m;
        y = y / 2;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    lli arr[] = {2, 4, 8, 6};
    while (t--)
    {
        lli k, a, b, num = 0;
        cin >> k >> a >> b;
        lli s = (a + b);
        if (k == 2)
        {
            // cout << ((s % 3 == 0) ? "YES" : "NO") << endl;
            if (s % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            lli p = (k - 3) / 4;
            for (lli i = 0; i < 4; i++)
                num += p * ((arr[i] * s) % 10);
            p = (k - 3) % 4;
            for (lli i = 0; i < p; i++)
                num += ((arr[i] * s) % 10);
            // cout << (num % 3 == 0) ? "YES" : "NO";
            num += (s + s % 10);
            if (num % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}