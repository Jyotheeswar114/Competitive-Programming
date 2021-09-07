#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd

bool sub_seq(string a, string b)
{
    int i = 0, j = 0;
    int a_n = a.size();
    int b_n = b.size();
    while (i < a_n and j < b_n)
    {
        if (a[i] == b[j])
            j++;
        i++;
    }
    return j == b_n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        char flag = 'A';
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '1' or s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9')
            {
                flag = s[i];
                break;
            }
        }
        if (flag != 'A')
        {
            cout << 1 << endl;
            cout << flag << endl;
            continue;
        }
        int flag2 = -1;
        string s2;
        string second[] = {"22", "55", "33", "77", "25", "27", "32", "35", "52", "57", "72", "75"};
        for (int i = 0; i < 12; i++)
        {
            if (sub_seq(s, second[i]))
            {
                flag2 = 1;
                s2 = second[i];
                break;
            }
        }
        if (flag2 != -1)
        {
            cout << 2 << endl;
            cout << s2 << endl;
            continue;
        }
        cout << 1 << endl
             << 1 << endl;
    }
}