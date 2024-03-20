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
        cin >> n;
        long long arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr,arr+n);
        long long z = arr[0] * n;
        long long ans  = sum - z;
        cout << ans << '\n';
    }

    return 0;
}