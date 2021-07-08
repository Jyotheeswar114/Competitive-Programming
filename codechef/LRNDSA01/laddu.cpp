#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string CONTEST_WON = "CONTEST_WON";
    string TOP_CONTRIBUTOR = "TOP_CONTRIBUTOR";
    string BUG_FOUND = "BUG_FOUND";
    string CONTEST_HOSTED = "CONTEST_HOSTED";
    string INDIAN = "INDIAN";
    string NON_INDIAN = "NON_INDIAN";
    while (t--)
    {
        int activities;
        string origin;
        cin >> activities >> origin;
        int ans = 0;
        for (int i = 0; i < activities; i++)
        {
            string act;
            cin >> act;

            if (act == CONTEST_WON)
            {
                int rank;
                cin >> rank;
                ans += 300;
                if (rank < 20)
                    ans += (20 - rank);
            }
            else if (act == TOP_CONTRIBUTOR)
                ans += 300;
            else if (act == BUG_FOUND)
            {
                int sev;
                cin >> sev;
                ans += sev;
            }
            else
                ans += 50;
        }
        if (origin == INDIAN)
            ans /= 200;
        else
            ans /= 400;
        cout << ans << endl;
    }
}