#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = n;
        ll res = 0;
        ll count = 0;
        while (x)
        {
            res = res * 10 + (x % 10);
            x /= 10;
            count++;
        }
        if (res == n)
        {
            cout << binpow(count, count) << endl;
        }
        else
            cout << (count * count) << endl;
    }
    return 0;
}