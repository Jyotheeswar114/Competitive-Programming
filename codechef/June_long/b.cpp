#include <iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int ans = 0;
        for(int i=0;i<s.size()-1;i++)
        {
            if((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x'))
            {    
                i++;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
