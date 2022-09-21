#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    cin>>a>>b;
    int max=b,t=b;
    for(int i=1;i<n;i++)
    {
        //cout<<t<<endl;
        cin>>a>>b;
        t+=(b-a);
        if(max<t)
            max=t;
    }
    cout<<max<<endl;
    return 0;
}
