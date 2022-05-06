#include <bits/stdc++.h>
using namespace std;
#define lli long long int
typedef vector<int> vi;
typedef vector<lli> vli;
typedef pair<int, int> pi;
typedef pair<lli, lli> pli;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    while (_--)
    {
        int n, k;
        cin >> n >> k;
        if (n / 2 + n % 2 >= k)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i % 2 == 1 and j % 2 == 1 and i == j and k != 0)
                    {
                        cout << "R";
                        k--;
                    }
                    else
                        cout << ".";
                }
                cout << endl;
            }
        }
        else
            cout << -1 << endl;
    }
}