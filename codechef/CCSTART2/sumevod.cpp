#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int odd = 0, even = 0;
    for (int i = 1; i <= n; i++)
    {
        odd += (2 * i - 1);
        even += (2 * i);
    }
    cout << odd << " " << even << endl;
}