#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int odd = 1,even = 2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)&1)
                {
                    cout<<even<<" ";
                    even += 2;
                }
                else
                {
                    cout<<odd<<" ";
                    odd += 2;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
