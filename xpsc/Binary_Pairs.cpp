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
        string s;
        cin >> n >> s;
        char x = s[0];
        int cnt = 0;

        if (n != 1)
        {
            for (int i = 1; i < n; i++)
            {
                if ((x == '1' && s[i] == '0') || (x == '0' && s[i] == '1'))
                {
                    cnt++;
                }
                x = s[i];
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}