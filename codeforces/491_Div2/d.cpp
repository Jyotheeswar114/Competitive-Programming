#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int n = a.size();
    int ans = 0;
    if(a[0] == '0' && b[0] == '0')
    {
        if(b[1] == '0')
        {
           ans++;
           b[1] = 'X';
        }
        else if(a[1] == '0')
        {
            ans++;
            a[1] = 'X';
        }
    }
    for(int i=1;i<n-1;i++)
    {
        if(a[i] == '0' && b[i] == '0')
        {
            if(a[i-1] == '0' || b[i-1] == '0')
            {
                ans++;
                a[i] = 'X';
                b[i] = 'X';
            }
            else if(b[i+1] == '0')
            {
                ans++;
                b[i+1] = 'X';
            }
            else if(a[i+1] == '0')
            {
                ans++;
                a[i+1] = 'X';
            }
        }
    }
    if(a[n-1] == '0' && b[n-1] == '0')
    {
            if(a[n-2] == '0' || b[n-2] == '0')
            {
                ans++;
            }
    }
    cout<<ans<<endl;
}
