#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    int INF = 999999;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    for (int cas = 1; cas <= _; cas++)
    {
        string s;
        cin >> s;
        int k;
        int g[26][26];
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                g[i][j] = INF;
            }
            g[i][i] = 0;
        }
        char vowels[] = {'A', 'E', 'I', 'O', 'U'};
        char consonants[] = {
            'B', 'C', 'D', 'F',
            'G', 'H', 'J', 'K',
            'L', 'M', 'N', 'P',
            'Q', 'R', 'S', 'T',
            'V', 'W', 'X', 'Y',
            'Z'};
        // cin >> k;
        // string pora;
        // for (int i = 0; i < k; i++)
        // {
        //     cin >> pora;
        //     g[pora[0] - 'A'][pora[1] - 'A'] = 1;
        // }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                g[vowels[i] - 'A'][consonants[j] - 'A'] = 1;
                g[consonants[j] - 'A'][vowels[i] - 'A'] = 1;
            }
        }

        for (int k = 0; k < 26; k++)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
                }
            }
        }
        int ans = INF;
        for (int i = 0; i < 26; i++)
        {
            int time = 0;
            for (int j = 0; j < s.size(); j++)
            {
                time += g[s[j] - 'A'][i];
            }
            if (time >= 0)
                ans = min(ans, time);
        }
        ans = (ans == INF) ? -1 : ans;
        cout << "Case #" << cas << ": " << ans << endl;
    }
}