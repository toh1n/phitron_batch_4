#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    long long a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    long long i = 0, j = 0, ans = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            long long x = 1, y = 1;
            i++;
            j++;
            while (i < n && a[i] == a[i - 1])
            {
                x++;
                i++;
            }
            while (j < m && b[j] == b[j - 1])
            {
                y++;
                j++;
            }
            ans += x * y;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << ans << '\n';
    return 0;
}