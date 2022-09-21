#include <iostream>
#include <algorithm>
using namespace std;
int x[2005],y[2005];
int b_x(int l, int r, int x_)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (x[mid] == x_)
            return mid;
        if (x[mid] > x_)
            return b_x(l, mid - 1, x_);
        return b_x(mid + 1, r, x_);
    }
    return -1;
}
int b_y(int l, int r, int x_)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (y[mid] == x_)
            return mid;
        if (y[mid] > x_)
            return b_y(l, mid - 1, x_);
        return b_y(mid + 1, r, x_);
    }
    return -1;
}
int main()
{
    int n,ans = 0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>y[i];
    sort(x,x+n);
    sort(y, y+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int g = x[i]^y[j];
            if(b_x(0,n-1,g) != -1 || b_y(0,n-1,g) != -1)
            {
                ans++;
              //  cout<<g<<endl;
            }
        }
    }
   // cout<<ans<<endl;
    if(ans%2 == 0)
        cout<<"Karen\n";
    else
        cout<<"Koyomi\n";
    return 0;
}
