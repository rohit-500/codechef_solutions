#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char ch = s[0];
        ll w = 0, b = 0;
        if (ch == 'W')
            w++;
        else
            b++;
        for (int i = 1; i < n; i++)
        {
            if (ch == s[i])
            {
                continue;
            }
            else
            {
                if (s[i] == 'B')
                    b++;
                else
                    w++;
            }
            ch = s[i];
        }
        ll ans = min(w, b);
        cout << ans << endl;
    }
    return 0;
}