#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string ans = ((a + b) > c && (a + c) > b && (b + c) > a) ? "YES" : "NO";
    cout << ans << endl;
}