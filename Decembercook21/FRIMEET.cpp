#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x == y)
            cout << "YES\n";
        else if (x > y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}