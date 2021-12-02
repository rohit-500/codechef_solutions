#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        typedef long long int ll;
        ll n, m;
        cin >> n >> m;
        vector<pair<int, int>> v;
        vector<string> r;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            r.push_back(s);
            int ct = 0;
            for (int j = 0; j < m; j++)
            {
                if (s[j] == '1')
                    ct++;
            }
            v.push_back({ct, i});
        }
        sort(v.begin(), v.end());
        string s = "";
        for (int i = 0; i < r.size(); i++)
        {
            s = s + r[v[i].second];
        }
        ll mn = 0;
        vector<int> suffix(n * m, 0);
        if (s[n * m - 1] == '0')
            suffix[n * m - 1] = 1;
        else
            suffix[n * m - 1] = 0;

        for (int i = n * m - 2; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                suffix[i] = suffix[i + 1] + 1;
            }
            else
            {
                suffix[i] = suffix[i + 1];
            }
        }
        for (int i = 0; i < n * m - 1; i++)
        {
            if (s[i] == '1')
            {
                mn += suffix[i + 1];
            }
        }
        cout << mn << endl;
    }

    return 0;
}