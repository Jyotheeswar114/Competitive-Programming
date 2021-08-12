#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a(3);
    vector<int> b(3);
    lli _;
    cin >> _;
    while (_--)
    {
        int alex = 0, bob = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            alex += a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            bob += b[i];
        }
        // bool flag = (a[0] > b[0]) or (a[0] == b[0] and a[1] > b[1]) or (a[0] == b[0] and b[1] == a[1] and a[2] > b[2]);
        int ans = alex > bob ? 1 : 2;
        cout << ans << endl;
    }
}