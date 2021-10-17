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
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < i; j++)
                cout << "(";
            for (int j = 0; j < i; j++)
                cout << ")";
            for (int j = 0; j < n - i; j++)
                cout << "()";
            cout << endl;
        }
    }
}