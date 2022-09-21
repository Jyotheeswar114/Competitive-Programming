#include <iostream>
using namespace std;
bool d[100001];
int main()
{
    for(int i=0;i<100001;i++)
        d[i] = 1;
    int n;
    cin>>;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        d[a[i]] = 0;
    }
    if(a[0] > 1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(a[0] == 0)
    {
        cout<<1<<" ";
        d[0] = true;
    }
    else
    {
        
    }
    for(int i =0;i<n;i++)
    {
        
    }
}
