#include <bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    switch (c)
    {
    case '^':
        return 3;
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return -1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        string result;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                st.push('(');
            else if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if ('A' <= s[i] && s[i] <= 'Z')
                result += s[i];
            else
            {
                while (!st.empty() && precedence(st.top()) >= precedence(s[i]))
                {
                    result += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        cout << result << endl;
        s.clear();
        result.clear();
    }
}