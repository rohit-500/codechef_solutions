#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        typedef long long int ll;
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool ans = true;
        vector<ll> v(n);
        v[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            ll val = (a[i - 1] % a[i] != 0);
            if (val)
            {
                ans = false;
                break;
            }
            v[i] = min(a[i - 1], a[i]);
        }
        if (!ans)
        {
            cout << -1 << endl;
            continue;
        }
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}