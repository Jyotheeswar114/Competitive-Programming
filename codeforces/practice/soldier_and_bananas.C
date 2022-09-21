#include <iostream>
using namespace std;
int main()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int ans=k*(w*(w+1)/2)-n;
    if(ans<0)
        cout<<0<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
