#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << n << endl;
            continue;
        }
        ll x = n;
        ll ans = 0;
        bool check = false;
        for (ll i = 63; i >= 0; i--)
        {
            if ((1LL << i) & n)
            {
                check = true;
            }
            if (check)
            {
                ans = ans % mod + (1LL << i) % mod;
            }
        }
        if (isPowerOfTwo(n))
        {
            cout << ans << endl;
        }
        else
            cout << ans + 1 << endl;
    }
    return 0;
}