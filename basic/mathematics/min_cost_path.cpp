#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int A, int B, vector<string> &C)
{
    vector<vector<bool>> visited(A, vector<bool>(B, false));
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
    q.push({0, 0, 0});
    vector<pair<int, int>> pos = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<char> dir = {'R', 'D', 'L', 'U'};
    int c, x, y;
    while (!q.empty())
    {
        int fc, fx, fy;
        tie(fc, fx, fy) = q.top();
        printf("(%d, %d, %d), ", fc, fx, fy);
        tie(c, x, y) = q.top();
        q.pop();
        if (x == A - 1 && y == B - 1)
            return c;
        visited[x][y] = true;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + pos[i].first, ny = y + pos[i].second;
            if (0 <= nx && nx < A && 0 <= ny && ny < B && !visited[nx][ny])
            {
                if (C[x][y] == dir[i])
                {
                    q.push({c, nx, ny});
                }
                else
                {
                    // cout<<"HEllo\n";
                    q.push({c + 1, nx, ny});
                    // cout<<"Hello\n";
                }
            }
        }
        // for(auto f:q){
        //     int fc, fx, fy;
        //     tie(fc, fx, fy) = f;
        //     print("(%d, %d, %d), ", fc, fx, fy);
        // }
        // cout<<endl;
    }
    return 0;
}

int main()
{
    int A, B;
    cin >> A >> B;
    vector<string> C;
    for (int i = 0; i < A; i++)
    {
        string h;
        cin >> h;
        C.push_back(h);
    }
    cout << solve(A, B, C) << endl;
    return 0;
}