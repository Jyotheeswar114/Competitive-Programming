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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '?')
        {
            int i = 0;
            while (i < n and s[i] == '?')
            {
                i++;
            }
            if (i == n)
            {
                for (int j = 0; j < n; j++)
                {
                    s[j] = (j & 1) ? 'B' : 'R';
                }
            }
            else
            {
                char start = s[i] == 'B' ? 'R' : 'B';
                for (int j = i - 1; j > -1; j--)
                {
                    s[j] = start;
                    start = start == 'B' ? 'R' : 'B';
                }
                // cout << "HEllo" << i << endl;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '?')
            {
                s[i] = s[i - 1] == 'B' ? 'R' : 'B';
            }
        }
        cout << s << endl;
    }
}