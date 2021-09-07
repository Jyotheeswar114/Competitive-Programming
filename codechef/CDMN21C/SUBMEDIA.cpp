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
        lli n, k;
        cin >> n >> k;
        vector<pair<int, int>> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i].first;
            h[i].second = i;
        }
        sort(h.begin(), h.end());
        vector<pair<int, int>> a;
        for (int i = n - k; i <= n - 1; i++)
        {
            a.push_back(make_pair(h[i].first, h[i].second));
            // cout << h[i].first << " " << h[i].second << endl;
        }
        // for (int i = 0; i < k; i++)
        // {
        //     cout << "a- " << a[i].first << " ";
        // }
        // cout << endl;
        int m = ((k & 1) ? a[k / 2] : a[k / 2 - 1]).first;
        cout << m << endl;
        vector<pair<int, int>> pora(k);
        for (int i = 0; i < k; i++)
        {
            pora[i].first = a[i].second;
            pora[i].second = a[i].first;
        }
        sort(pora.begin(), pora.end());
        for (int i = 0; i < k; i++)
        {
            cout << pora[i].second << " ";
        }
        cout << endl;
    }
}