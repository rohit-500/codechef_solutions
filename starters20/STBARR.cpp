#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> a[i];
            s.insert(a[i]);
        }
        int pos = 1;
        int x = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= x)
            {
                x = a[i];
                pos = i + 1;
            }
        }
        if (s.size() == 1)
            cout << 0 << endl;
        else if (pos == n)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}