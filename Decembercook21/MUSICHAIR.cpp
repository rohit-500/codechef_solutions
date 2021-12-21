#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll find(int num)
{
    ll count = 0;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                count++;

            else
                count += 2;
        }
    }
    return count;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2)
            cout << 1 << endl;
        else
        {
            cout << find(n - 1) << endl;
        }
    }
    return 0;
}