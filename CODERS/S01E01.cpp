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
        if (n < 21)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}