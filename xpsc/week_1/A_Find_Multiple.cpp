#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    int ans = (b / c) * c;

    if (ans >= a && ans <= b)
    {
        cout << ans << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}