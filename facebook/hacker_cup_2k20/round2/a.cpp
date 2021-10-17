#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define gcd __gcd
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli _;
    cin >> _;
    lli ku = _;
    while (_--)
    {
        lli n, k;
        cin >> n >> k;
        lli s[n];
        for (int i = 0; i < k; i++)
            cin >> s[i];
        lli as, bs, cs, ds;
        cin >> as >> bs >> cs >> ds;
        for (int i = k; i < n; i++)
            s[i] = (((as * s[i - 2]) % ds + (bs * s[i - 1]) % ds) % ds + cs) % ds;
        lli x[n];
        for (int i = 0; i < k; i++)
            cin >> x[i];
        lli ax, bx, cx, dx;
        cin >> ax >> bx >> cx >> dx;
        for (int i = k; i < n; i++)
            x[i] = (((ax * x[i - 2]) % dx + (bx * x[i - 1]) % dx) % dx + cx) % dx;
        lli y[n];
        for (int i = 0; i < k; i++)
            cin >> y[i];
        lli ay, by, cy, dy;
        cin >> ay >> by >> cy >> dy;
        for (int i = k; i < n; i++)
            y[i] = (((ay * y[i - 2]) % dy + (by * y[i - 1]) % dy) % dy + cy) % dy;

        // cout << "\n s -- \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s[i] << " ";
        // }
        // cout << "\n x -- \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << x[i] << " ";
        // }
        // cout << "\n y -- \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << y[i] << " ";
        // }
        // cout << endl;

        lli ekkuva = 0, takkuva = 0, ivvachu = 0, tesseukovachu = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < x[i])
            {
                takkuva += (x[i] - s[i]);
                tesseukovachu += y[i];
            }
            else if (x[i] <= s[i] && s[i] <= (x[i] + y[i]))
            {
                ivvachu += (s[i] - x[i]);
                tesseukovachu += (x[i] + y[i] - s[i]);
            }
            else
            {
                ekkuva += (s[i] - x[i] - y[i]);
                ivvachu += y[i];
            }
        }
        // cout << " ekkuva - " << ekkuva << endl;
        // cout << " takkuva - " << takkuva << endl;
        // cout << " ivvachu - " << ivvachu << endl;
        // cout << " teesukovachu - " << tesseukovachu << endl;
        cout << "Case #" << ku - _ << ": ";
        if (ekkuva == takkuva)
        {
            cout << takkuva << endl;
        }
        else if (ekkuva < takkuva)
        {
            if (takkuva - ekkuva <= ivvachu)
            {
                cout << takkuva << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (ekkuva - takkuva <= tesseukovachu)
                cout << ekkuva << endl;
            else
                cout << -1 << endl;
        }
    }
}