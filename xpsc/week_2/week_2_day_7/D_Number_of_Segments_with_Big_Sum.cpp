#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0, r = 0, l = 0, sum = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum >= s)
        {
            while (sum >= s)
            {
                ans += (n - 1) - r + 1;
                sum -= arr[l];
                l++;
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}