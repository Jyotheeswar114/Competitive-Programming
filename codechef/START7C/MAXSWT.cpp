#include <bits/stdc++.h>
using namespace std;
#define lli long long int

struct comp
{
    bool operator()(const pair<lli, lli> &v1, const pair<lli, lli> &v2) const
    {
        return v1.second == v2.second ? v1.first < v2.first : v1.second > v2.second;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        lli n, d;
        cin >> n >> d;
        vector<pair<lli, lli>> candy(n);
        for (lli i = 0; i < n; i++)
            cin >> candy[i].first;
        for (lli i = 0; i < n; i++)
            cin >> candy[i].second;
        sort(candy.begin(), candy.end());
        lli res = 0;
        multiset<pair<lli, lli>, comp> mset;
        lli l = 0;
        for (int r = n - 1; r >= 0; r--)
        {
            while (l < r and candy[l].first + candy[r].first <= d)
                mset.insert(candy[l++]);
            auto it = mset.find(candy[r]);
            if (l > r and it != mset.end())
                mset.erase(it);
            pair<lli, lli> left, righ;
            left = mset.empty() ? make_pair(0LL, 0LL) : *mset.begin();
            righ = candy[r];
            if (left.first + righ.first <= d and res < left.second + righ.second)
                res = left.second + righ.second;
        }
        cout << res << "\n";
    }
}