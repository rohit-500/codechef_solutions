#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll x = n - m;
        if (x <= m + 1)
        {
            cout << x << endl;
            continue;
        }
        ll y = x / (m + 1);
        ll z = (x) % (m + 1);
        ll cnty = (m + 1) - z;
        ll cntx = y + 1;
        ll sum = cnty * (y) * (y + 1) / 2 + z * (y + 1) * (y + 2) / 2;
        cout << sum << endl;
    }
    return 0;
}