#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        cin>>a;
        cout<<a<<" ";
        int last = a;
        for(int i=0;i<n-1;i++)
        {
            cin>>a;
            if(i%2==0)
            {
                if(a > last)
                    a = a* -1;
            }
            else
            {
                if(a < last)
                    a = a* -1;
            }
            cout<<a<<" ";
            last = a;
        }
        cout<<endl;
    }
}
