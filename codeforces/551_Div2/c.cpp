#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack <char> st;
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')')
        {
            if(st.size() == 0)
            {
                cout<<":(\n";
                return 0;
            }
            st.pop();
        }
        else
        {
            if(st.size() > 1)
            {
                st.pop();
                s[i] = ')';
            }
            else
            {
                st.push('(');
                s[i] = '(';
            }
        }
    }
    if(s[n-1] == '(')
    {
        cout<<": (\n";
        return 0;
    }
    else
    {
        if(st.size() == 1)
        {
            s[n-1] = ')';
            cout<<s<<endl;
            return 0;
        }
        else
        {
            cout<<":(\n";
            return 0;
        }
    }
}
