#include <bits/stdc++.h>
#include <vector>
vector<int> factors(int n)
{
    vector<int> f;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n = n / i;
            f.push_back(i);
        }
    }
    if (n > 1)
        f.push_back(n);
    return f;
}

vector<int> factors(int n)
{
    vector<int> f;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n = n / i;
            f.push_back(i);
        }
    }
    if (n > 1)
    {
        f.push_back(n);
    }
    return f;
}