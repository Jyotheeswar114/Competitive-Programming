#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (((a + b + c) == 180 && !(a == 0 || b == 0 || c == 0)) ? "YES" : "NO") << endl;
}