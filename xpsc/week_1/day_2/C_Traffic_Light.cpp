//https://codeforces.com/problemset/problem/1744/C

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
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        if (c == 'g')
        {
            cout << 0 << '\n';
            continue;
        }

        s += s;
        int cnt = 0;
        int ans = 0;
        int l = n * 2;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == c)
            {
                cnt = 0;
                while (s[i] != 'g' && i < l)
                {
                    cnt++;
                    i++;
                }
                if (cnt > ans)
                {
                    ans = cnt;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
