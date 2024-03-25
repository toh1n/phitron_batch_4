#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long a;
        cin >> a;
        if (a == 1)
        {
            cout << 6 << '\n';
            continue;
        }

        long long ans = 0;

        if (a % 2 == 0)
        {

            ans = (a / 2) * 12;
            ans += a / 2;
        }
        else
        {

            ans = ((a - 1) / 2) * 12;
            ans += (a - 1) / 2;
            ans += 6;
        }
        cout << ans << '\n';
    }

    return 0;
}