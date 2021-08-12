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
    int tmp;
    while (_--)
    {
        map<int, int> dic;
        for (int i = 0; i < 4; i++)
        {
            cin >> tmp;
            dic[tmp]++;
        }
        int ans;
        if (dic.size() >= 3 or (dic.size() == 2 and dic[tmp] == 2))
            ans = 2;
        else if (dic.size() <= 1)
            ans = 0;
        else
            ans = 1;
        cout << ans << endl;
    }
}