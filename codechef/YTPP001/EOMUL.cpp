#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 3 != 0)
    {
        cout << "-1";
    }
    else
        cout << n % 2;
    cout << endl;
}