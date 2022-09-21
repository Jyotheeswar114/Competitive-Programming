#include <iostream>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(!(n&1))
        {
            n=n>>1;
        }
        cout<<n/2<<endl;
    }
}
