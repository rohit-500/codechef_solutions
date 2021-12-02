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
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {

            string s = "";
            for (int j = 0; j < 32; j++)
            {
                if (i & (1 << j))
                {
                    s += '1';
                }
                else
                    s += '0';
            }
            int j = s.size() - 1;
            while (j >= 0 && s[j] != '1')
                j--;
            s.resize(j + 1);
            string temp = s;
            reverse(s.begin(), s.end());
            if (temp == s)
            {
                ans.push_back(i);
            }
        }
        int r = ans.size();
        vector<int> res;
        for (int i = r - 1; n > 0;)
        {
            if (ans[i] <= n)
            {
                res.push_back(ans[i]);
                n -= ans[i];
            }
            else
            {
                i--;
            }
        }
        cout << res.size() << endl;
        for (auto &i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}