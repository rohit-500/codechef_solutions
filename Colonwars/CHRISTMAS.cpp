#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define NVALUE 1000002
bool primes[NVALUE + 1];
void sieve()
{
    for (int i = 0; i <= NVALUE; i++)
    {
        primes[i] = true;
    }
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= NVALUE; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= NVALUE; j += i)
            {
                primes[j] = false;
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    sieve();
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        bool check = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (!primes[a[i]])
                check = false;
        }
        if (check)
        {
            cout << "Do not distribute\n";
            continue;
        }
        ll l = 0, m = 0;
        for (ll i = 0; i < n; i += 2)
            l = __gcd(l, a[i]);
        for (ll i = 1; i < n; i += 2)
            m = __gcd(m, a[i]);

        bool check1 = true, check2 = true;
        for (ll i = 0; i < n; i += 2)
            if (a[i] % m == 0)
                check1 = false;
        for (ll i = 1; i < n; i += 2)
            if (a[i] % l == 0)
                check2 = false;

        if (check1)
            cout << "Distribute\n"
                 << m << "\n";
        else if (check2)
            cout << "Distribute\n"
                 << l << "\n";
        else
            cout << "Distribute\n"
                 << "Coloring is not possible\n";
    }
    return 0;
}