#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2)
        cout<<"NO\n";
    else if(n&1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
