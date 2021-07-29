#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b = 0, a = 0, ans = 2 * n, a_s = n, b_s = n;
        char temp;
        string s;
        cin >> s;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 1)
            {
                b_s--;
                b += (s[i] - '0');
            }
            else
            {
                a_s--;
                a += (s[i] - '0');
            }
            if (a > b_s + b)
            {
                ans = i + 1;
                break;
            }
            else if (b > a_s + a)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
}