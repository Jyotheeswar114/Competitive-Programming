#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,ans = 0,temp;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp > k)
                ans += (temp - k);
        }
        cout<<ans<<endl;
    }
}
