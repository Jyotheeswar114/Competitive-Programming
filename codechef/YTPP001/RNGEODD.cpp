#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (i % 2)
            cout << i << " ";
    }

    cout << endl;
}