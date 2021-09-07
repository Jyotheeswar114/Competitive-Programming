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
    for (int cas = 1; cas <= _; cas++)
    {
        int n;
        cin >> n;
        string s[n];
        pair<int, int> row[n], column[n];
        for (int i = 0; i < n; i++)
        {
            row[i].first = 0;
            row[i].second = 0;
            column[i].first = 0;
            column[i].second = 0;
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[i][j] == 'X')
                {
                    row[i].first++;
                    column[j].first++;
                }
                else if (s[i][j] == 'O')
                {
                    row[i].second++;
                    column[j].second++;
                }
            }
        }
        map<int, int> dp;
        for (int i = 0; i < n; i++)
        {
            if (row[i].second == 0)
            {
                if (n - row[i].first > 1)
                    dp[n - row[i].first]++;
                else
                {
                    int hole;
                    for (int j = 0; j < n; j++)
                    {
                        if (s[i][j] == '.')
                        {
                            hole = j;
                            break;
                        }
                    }
                    if (column[hole].second != 0 or n - column[hole].first > 1)
                        dp[n - row[i].first]++;
                }
            }
            if (column[i].second == 0)
            {
                dp[n - column[i].first]++;
            }
        }
        if (dp.size() == 0)
            cout << "Case #" << cas << ": "
                 << "Impossible" << endl;
        else
        {
            auto it = dp.begin();
            cout << "Case #" << cas << ": " << it->first << " " << it->second << endl;
            // cout << "HEllo" << endl;
        }
    }
}