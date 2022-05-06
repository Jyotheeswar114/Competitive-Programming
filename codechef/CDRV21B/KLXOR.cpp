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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int p[n];
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            c += (s[i] - '0');
            p[i] = c;
            // cout << p[i] << " ";
        }
        if (n == k)
        {
            cout << p[n - 1] << endl;
            continue;
        }
        int ans = p[n - k] % 2;
        for (int i = 1; i < k; i++)
        {
            ans += ((p[n - k + i] - p[i - 1]) % 2);
            // cout << i << " " << n - k + i << endl;
        }
        cout << ans << endl;
    }
}