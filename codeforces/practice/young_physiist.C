#include <iostream>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    x=y=z=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
