#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> ans;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}