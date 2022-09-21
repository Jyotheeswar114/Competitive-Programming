#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int p[100000 + 1];
    int turn = 0;
    for (int i = turn ? 0 : n - 1; turn ? i < n : i > -1; turn ? i++ : i--)
    {
        cout << i << endl;
    }
    return 0;
}