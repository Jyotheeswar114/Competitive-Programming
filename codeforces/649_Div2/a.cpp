#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum=0,temp,flag = 0;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            sum+=temp;
            if(temp%x)
                flag = 1;
        }
        if(sum%x)
            printf("%d\n",n);
        else
        {
            if(flag)
                cout<<n-1<<endl;
            else
                cout<<-1<<endl;
        }
    }
}
