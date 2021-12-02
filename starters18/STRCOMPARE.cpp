#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        vector<int> fa(26, 0), fb(26, 0);
        bool prev = false;
        ll ans = 0;
        for (int i = n; i >= 0; i--)
        {
            if (a[i] < b[i])
            {
                prev = true;
                ans++;
            }
            else if (a[i] > b[i])
            {
                prev = false;
            }
            else
            {
                ans += prev ? 1 : 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}