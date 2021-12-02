#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int x = a + b;
        int y = p + q;
        if (a == p && b == q)
            cout << 0 << endl;
        else if (x % 2 == (y % 2))
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}