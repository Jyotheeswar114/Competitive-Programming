#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int temp;
        cin >> temp;
        long long int ans = temp;
        long long int min = temp;
        for (long long int i = 0; i < n - 1; i++)
        {
            cin >> temp;
            if (temp < min)
                min = temp;
            ans += min;
        }
        cout << ans << endl;
    }
}