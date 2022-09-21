#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int f[n],p[n],res[m+1];
    for(int i=0;i<n;i++)    cin>>f[i];
    for(int i=0;i<n;i++)    cin>>p[i];
    for(int i=1;i<m+1;i++)  res[i]=0;
    for(int i=0;i<n;i++)    res[f[i]]+=p[i];
    int high=999999999;
    for(int i=1;i<m+1;i++)
    {
        if(res[i]!=0 && res[i]<high) high=res[i];
    }
    cout<<high<<endl;}
    return 0;
}
