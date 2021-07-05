#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            int temp = (i / 2) * 10 + 1;
            for (int j = 0; j < 5; j++)
            {
                cout << temp + j << " ";
            }
        }
        else
        {
            int temp = (i / 2) * 10;
            for (int j = 0; j < 5; j++)
            {
                cout << temp - j << " ";
            }
        }
        cout << endl;
    }
}