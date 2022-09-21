#include <iostream>
using namespace std;
int main()
{
    int n,x=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a=b+x;
        if(x<a)
            x=a;
        cout<<a<<" ";
    }
    cout<<endl;
}
