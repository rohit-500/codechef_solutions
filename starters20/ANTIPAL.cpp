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
        if (n % 2 == 1)
            cout << -1 << endl;
        else
        {
            string s;
            for (int i = 0; i < n; i++)
                s.push_back('0');
            int i = 0, j = n - 1;
            while (i < j)
            {
                s[i] = '1';
                s[j] = '0';
                i++;
                j--;
            }
            cout << s << endl;
        }
    }
    return 0;
}