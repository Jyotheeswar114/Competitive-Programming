#include <iostream>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        k = 64 - k;
        for(int i=1;i<=63;i++)
        {
            if(i<=k)
                cout<<"X";
            else
                cout<<".";
            if(i%8 ==0)
                cout<<"\n";
        }
        cout<<"O\n";
    }
}
