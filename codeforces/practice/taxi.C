#include <iostream>
using namespace std;
int a[5]={0};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a[t]++;
    }
    int ans=a[4]+a[2]/2;
    if(a[1]>a[3])
    {
        ans+=a[3];
        a[1]-=a[3];
        if(a[2]&1 && a[1]>1)
        {
            ans+=1;
            a[1]-=2;
        }
        ans+=(a[1]/4);
        if(a[1]%4)
            ans++;
    }
    else
    {
        ans+=a[3];
        if(a[2]&1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
