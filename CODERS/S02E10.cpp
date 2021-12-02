#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;
        ll count = 0;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            if (abs(a[i] - b[i]) <= k)
                count++;
        }
        if (count >= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}