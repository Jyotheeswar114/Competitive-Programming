#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        int n;
        cin >> n;
        string pora;
        vector<char> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> pora;
            ans.push_back((pora[i] == '0') ? '1' : '0');
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
}