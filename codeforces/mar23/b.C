#include <iostream>
#include <vector>
using namespace std;
vector <int> pri[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            a[i]=0;
            pri[i].clear();
        }
        for(int i=1;i<=n;i++)
        {
            int k,temp;
            cin>>k;
            for(int j=0;j<k;j++)
            {
                cin>>temp;
                pri[i].push_back(temp);
            }
        }
        int flag1=0;
        for(int i=1;i<=n;i++)
        {
            int flag=0;
            for(auto u:pri[i])
            {
                if(a[u]==0)
                {
                    a[u]=1;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                for(int j=1;j<=n;j++)
                {
                    if(a[j]==0)
                    {
                        cout<<"IMPROVE\n"<<i<<" "<<j<<endl;
                        flag1=1;
                         break;
                    }
                }
                if(flag1==1) break;
            }
        }
        if(flag1==0)
            cout<<"OPTIMAL\n";
    }
    return 0;
}
