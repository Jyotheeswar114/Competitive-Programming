#include <iostream>
int a[200004];
using namespace std;
int main()
{
    int t,n,temp,ans,rg;
    cin>>t;
    while(t--)
    {
        ans = 0;
        rg = 0;
        cin>>n;
        for(int i=0;i<=n;i++)
            a[i] = 0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a[temp]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]){
                ans = ans + a[i]/i;
                rg = rg + a[i]%i;
                if(rg >= i)
                {
                    rg = rg - i;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
