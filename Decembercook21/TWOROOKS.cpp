#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == x || b == y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}