#include <iostream>
using namespace std;
long long int dp[100005], mod = 1000000007;
long long int fun(int n)
{
 //   printf("n - %d\n",n);
    if(dp[n] != -1)
        return dp[n];
    return dp[n] = (fun(n-1) + fun(n-2)) % mod;
}
int main()
{
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    string s;
    cin>>s;
    int l = s.size();
    for(int i = 0; i < l ;i++)
    {
        if(s[i] == 'm' || s[i] == 'w')
        {
            cout<<0<<endl;
            return 0;
        }
    }
    for(int i = 3; i<= l;i++)
        dp[i] = -1;
    long long int ans = 1;
    int i = 0;
    while(i < l)
    {
        int j = 0;
        if(s[i] == 'n')
        {
            while(i < l && s[i] == 'n')
            {
                j += 1;
                i += 1;
            }
            
    //        printf("i -- %d j -- %d\n", i,j);
            ans = (ans * fun(j)) % mod;
      //      printf("Pora\n");
        }
        else if(s[i] == 'u')
        {
            while(i < l && s[i] == 'u')
            {
                j += 1;
                i += 1;
            }
            ans = (ans * fun(j)) % mod;
        }
        else
            i += 1;
    }
    cout<<ans<<endl;
    return 0;
}
