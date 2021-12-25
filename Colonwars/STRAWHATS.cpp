#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

    ll a, b, k;
    cin >> a >> b >> k;

    ll ct = 0;
    for (ll i = a; i <= b; i++)
    {
        ll x = i;
        ll res = 0;
        while (x)
        {
            res = res * 10 + (x % 10);
            x /= 10;
        }
        ll ans = abs(i - res);
        if (ans % k == 0)
            ct++;
    }
    cout << ct << endl;

    return 0;
}