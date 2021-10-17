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
    for (int test = 1; test < _ + 1; test++)
    {
        lli n, m;
        cin >> n >> m;
        lli s[m];
        map<lli, vector<lli>> round;
        for (int i = 0; i < m; i++)
        {
            cin >> s[i];
            round[s[i]].push_back(i);
        }
        vector<bool> model(m, true);
        lli p[n][m];
        lli ans = 0;
        for (int i = 0; i < n; i++)
        {
            map<lli, vector<lli>> next_round;
            vector<lli> needed;
            for (int j = 0; j < m; j++)
            {
                cin >> p[i][j];
                lli k1 = p[i][j];
                if (round[k].size())
                {
                    next_round[k].push_back(round[k][-1]);
                    round[k].pop_back();
                }
                else
                {
                    needed.push_back(k);
                }
            }
            for (auto x : round)
            {
                if (x.second.size())
                {
                    for (auto j : x.second)
                    {
                        model[j] ? model[j] = false : ans++;
                        next_round[needed[-1]].push_back(j);
                        needed.pop_back();
                    }
                }
            }
            round = next_round;
        }
        cout << "Case #" << test << ": " << ans << endl;
    }
}