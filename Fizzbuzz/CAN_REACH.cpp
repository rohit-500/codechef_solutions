#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        bool ans = ((x % k) == 0 && (y % k == 0));
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}