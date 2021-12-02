#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    ll t;
    cin >> t;
    while (t--)
    {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll n, k;
        cin >> n >> k;
        while (n)
        {
            pq.push(n % 10);
            n /= 10;
        }
        while (k--)
        {
            ll x = pq.top();
            if (x == 9)
            {
                break;
            }
            else
            {
                pq.pop();
                pq.push(x + 1);
            }
        }
        ll ans = 1;
        while (!pq.empty())
        {
            ans *= pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}