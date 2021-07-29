#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans_dep = 1, ans_lon = 1, ans_dep_st = 0, ans_lon_st = 0;
    int dep = 1, lon = 1, dep_st = 0, lon_st = 0;
    stack<int> st;
    st.push(1);
    for (int i = 1; i < n; i++)
    {
        if (st.empty())
        {
            st.push(1);
        }
        else
        {
            if (a[i] == 2)
            {
                st.pop();
                if (st.empty())
                {
                    if (ans_dep < dep)
                    {
                        ans_dep = i - dep_st + 1;
                        ans_dep_st = dep_st;
                    }
                    if (ans_lon < i - lon_st + 1)
                    {
                        ans_lon = i - lon_st + 1;
                        ans_lon_st = lon_st;
                    }
                    dep = 1, dep_st = i + 1, lon_st = i + 1;
                }
            }
            else
            {
                st.push(1);
                dep = st.size();
            }
        }
    }
    cout << ans_dep << " " << ans_dep_st + 1 << " " << ans_lon << " " << ans_lon_st + 1 << endl;
}