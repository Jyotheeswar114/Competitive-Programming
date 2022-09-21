#include <iostream>
using namespace std;
int main()
{
    int n,m,h,temp;
    cin>>n>>m>>h;
    int c[m],r[n];
    for(int i=0;i<m;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
        cin>>r[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>temp;
            if(temp)
            {
                if(r[i] < c[j])
                    cout<<r[i]<<" ";
                else
                    cout<<c[j]<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
}
