#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = -1;
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
            {
                if (s[i] == '<')
                    st.push('<');
                else
                    break;
            }
            else
            {
                if (s[i] == '>')
                {
                    st.pop();
                    if (st.empty())
                        ans = (ans < i) ? i : ans;
                }
                else
                    st.push('<');
            }
        }
        cout << ans + 1 << endl;
    }
}