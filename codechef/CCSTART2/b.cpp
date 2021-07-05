#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 11 == 0 and n % 5 == 0)
        cout << "BOTH";
    else if (!(n % 11 == 0 || n % 5 == 0))
        cout << "NONE";
    else
        cout << "ONE";
    cout << endl;
}