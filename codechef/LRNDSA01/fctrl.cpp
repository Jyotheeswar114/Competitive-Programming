#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int ans = 0;
        for (long int i = 5; n / i >= 1; i *= 5)
        {
            ans += (n / i);
        }
        cout << ans << endl;
    }
}