#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;

        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }

        for (auto x : mp)
        {
            if (x.second % 2 != 0)
            {
                cnt++;
            }
        }

        if (k >= cnt - 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}