#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[800110];
void solve(ll num1)
{
    ll i, n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0, mod = 1e9 + 7, xpos = -1, ypos = -1;
    char c;
    memset(dp, 0, sizeof(dp));
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'X')
        {
            c = s[i];
            dp[i] = 0;
            xpos = i++;
            break;
        }
        if (s[i] == 'O')
        {
            c = s[i];
            dp[i] = 0;
            ypos = i++;
            break;
        }
        dp[i] = 0;
    }
    for (; i < s.size(); i++)
    {
        if (s[i] == 'F')
            dp[i] = dp[i - 1];
        else if (c == s[i])
            dp[i] = dp[i - 1];
        else if (c != s[i])
        {
            ll maxi = max(xpos, ypos);
            if (maxi == xpos && s[i] == 'X')
                dp[i] = dp[maxi];
            else if (maxi == xpos && s[i] == 'O')
                dp[i] = (dp[maxi] + maxi + 1) % mod;
            else if (maxi == ypos && s[i] == 'O')
                dp[i] = dp[maxi];
            else
                dp[i] = (dp[maxi] + maxi + 1) % mod;
            c = s[i];
        }
        if (s[i] == 'X')
            xpos = i;
        if (s[i] == 'O')
            ypos = i;
    }
    count = 0;
    for (i = 1; i <= s.size(); i++)
        count = (count + (dp[i])) % mod;
    cout << "Case #" << num1 << ": " << count << endl;
}
int main()
{
    ll t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
        solve(i);
}