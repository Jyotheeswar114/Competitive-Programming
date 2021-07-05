#include <iostream>
using namespace std;
int main()
{
    int n, k, ans = -1;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == k)
        {
            ans = 1;
            break;
        }
    }
    cout << ans << endl;
}