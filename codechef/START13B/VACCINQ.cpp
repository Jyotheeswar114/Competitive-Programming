#include <bits/stdc++.h>
using namespace std;
#define lli long long int
typedef vector<int> vi;
typedef vector<lli> vli;
typedef pair<int, int> pi;
typedef pair<lli, lli> pli;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        lli n, p, x, y;
        cin >> n >> p >> x >> y;
        lli a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        lli ans = 0;
        for (int i = 0; i < p; i++)
        {
            ans += (a[i]) ? y : x;
        }
        cout << ans << endl;
    }
}