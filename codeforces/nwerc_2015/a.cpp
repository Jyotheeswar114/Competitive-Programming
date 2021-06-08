#include <bits/stdc++.h>

using namespace std;

struct Interval
{
    long long int start, time;
};

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    Interval t[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &t[i].start, &t[i].time);
    }
    int ans = 0;
    priority_queue<long long int, vector<long long int>, greater<long long int>> ws_work;
    priority_queue<long long int, vector<long long int>, greater<long long int>> ws_idle;
    sort(t, t + n, compareInterval);
    for (int i = 0; i < n; i++)
    {
        long long int temp;
        while (ws_work.size() and ws_work.top() > t[i].start)
        {
            temp = ws_work.top();
            ws_work.pop();
            ws_idle.push(temp);
        }
        while (ws_idle.size() and t[i].start - ws_idle.top() - 1 >= m)
            ws_idle.pop();
        if (ws_idle.size())
        {
            ws_idle.pop();
            ws_work.push(t[i].start + t[i].time - 1);
        }
        else
        {
            ws_work.push(t[i].start + t[i].time - 1);
            ans++;
        }
    }
    printf("%lld\n", n - ans);
}