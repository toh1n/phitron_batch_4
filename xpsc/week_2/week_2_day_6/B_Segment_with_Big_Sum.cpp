#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, s;
    cin >> n >> s;
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long l = 0, r = 0, ans = -1, sum = 0;

    while (r < n)
    {
        sum += arr[r];
        if (sum >= s)
        {
            if (ans == -1)
            {
                ans = r - l + 1;
            }

            ans = min(ans, r - l + 1);
            while (sum >= s)
            {
                sum -= arr[l];
                l++;
                if (sum >= s)
                {
                    ans = min(ans, r - l + 1);
                }
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}