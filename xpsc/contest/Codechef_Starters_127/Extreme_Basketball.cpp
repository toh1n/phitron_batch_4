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
        int a, b;
        cin >> a >> b;

        if ((b + 10) <= a)
        {
            cout << 0 << '\n';
            continue;
        }
        int ans = ((b + 10) - a);
        if (ans <= 3 && ans > 0)
        {
            cout << 1 << '\n';
            continue;
        }

        if (ans % 3 == 0)
        {
            cout << ans / 3 << '\n';
        }
        else
        {
            cout << (ans / 3) + 1 << '\n';
        }
    }

    return 0;
}