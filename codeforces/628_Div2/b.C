#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count = 1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int last = a[0];
        for(int i=1;i<n;i++)
        {
            int pre = a[i];
            if(last == pre)
                continue;
            else
            {
                count++;
                last = pre;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
