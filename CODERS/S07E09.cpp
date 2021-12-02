#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<ll>());
        ll idx = n;
        for (ll i = n - 2; i >= 0; i--)
        {
            if (a[i] == a[i + 1])
            {
                idx = i + 1;
                continue;
            }
            else
                break;
        }
        ll ans = (a[n - 1] * n + (idx - 1));
        cout << ans << endl;
    }
    return 0;
}