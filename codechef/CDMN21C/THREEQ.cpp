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
    int temp;
    while (_--)
    {
        int a = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            a += temp;
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            a -= temp;
        }
        string ans = (a == 0) ? "Pass" : "Fail";
        cout << ans << endl;
    }
}