#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<-1;
        else if((n-1)%3==0)
        {
            for(int i=0;i<n-2;i++)
                cout<<2;
            cout<<3<<3;
        }
        else
        {
            for(int i=0;i<n-1;i++)
                cout<<2;
            cout<<3;
        }
        cout<<endl;
    }
    return 0;
}
