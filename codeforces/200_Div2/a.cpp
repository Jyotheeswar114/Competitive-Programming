#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pre, now;
    int n, ans = 1;
    cin >> n;
    cin >> pre;
    for (int i = 1; i < n; i++)
    {
        cin >> now;
        if (now[0] == pre[1])
        {
            ans += 1;
            pre[0] = now[0];
            pre[1] = now[1];
        }
    }
    printf("%d\n", ans);
}