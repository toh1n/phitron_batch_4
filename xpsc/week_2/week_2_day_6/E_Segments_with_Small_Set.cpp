#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long l = 0, r = 0, ans = 0;
    map<long long, long long> mp;
    while (r < n)
    {
        mp[arr[r]]++;

        while (mp.size() > k)
        {
            mp[arr[l]]--;
            if (mp[arr[l]] == 0)
            {
                mp.erase(arr[l]);
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << '\n';
    return 0;
}