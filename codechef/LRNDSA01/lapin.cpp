#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        int f[26];
        for (int i = 0; i < 26; i++)
        {
            f[i] = 0;
        }
        cin >> s;
        for (int i = 0; i < s.size() / 2; i++)
        {
            f[s[i] - 'a']++;
            f[s[s.size() - 1 - i] - 'a']--;
        }
        string flag = "YES";
        for (int i = 0; i < 26; i++)
        {
            if (f[i] != 0)
            {
                flag = "NO";
                break;
            }
        }
        cout << flag << endl;
    }
}