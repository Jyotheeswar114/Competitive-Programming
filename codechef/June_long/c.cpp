#include <iostream>
using namespace std;
int main()
{
    int t,n,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans = 0,five = 0, ten = 0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp == 5)
            {
                ans++;
                five++;
            }
            else if(temp == 10)
            {
                if(five)
                {
                    ans++;
                    five--;
                    ten++;
                }
            }
            else
            {
                if(ten)
                {
                    ans++;
                    ten--;
                }
                else if(five >= 2)
                {
                    ans++;
                    five-=2;
                }
            }
        }
        if(ans == n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
