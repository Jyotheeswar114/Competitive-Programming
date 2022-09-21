#include <iostream>
using namespace std;
int  main()
{
    int n,s,t,p1=0,p2=0,l1=0,l2=0;
    cin>>n;
    while(n--)
    {
        cin>>s>>t;
        p1 += s;
        p2 += t;
        if(p1 > p2)
        {
            if(l1 < p1 - p2)
                l1 = p1 - p2;
        }
        else
        {
            if(l2 < p2 - p1)
                l2 = p2 - p1;
        }
    }
    if(l1 > l2)
        cout<<1<<" "<<l1<<endl;
    else
        cout<<2<<" "<<l2<<endl;
    return 0;
}
