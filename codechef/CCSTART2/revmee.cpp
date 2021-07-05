#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, tem;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> tem;
        a.push_back(tem);
    }
    for (int i = n - 1; i > -1; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}