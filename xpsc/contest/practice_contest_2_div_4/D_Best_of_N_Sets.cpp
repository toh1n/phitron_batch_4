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
        int x, y;
        cin >> x >> y;

        if (x > y)
        {
            int ans = (2 * x) - 1;
            cout << ans << '\n';
        }
        else
        {
            int ans = (2 * y) - 1;
            cout << ans << '\n';
        }
    }

    return 0;
}