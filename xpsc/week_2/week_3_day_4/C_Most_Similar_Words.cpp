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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = 0;
                for (int k = 0; k < m; k++)
                {
                    x += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, x);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}