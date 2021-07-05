#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = a > b ? a : b;
    int y = a < b ? a : b;
    if (c < y)
        cout << y;
    else if (c > y && c < x)
    {
        cout << c;
    }
    else
        cout << x;
    cout << endl;
}