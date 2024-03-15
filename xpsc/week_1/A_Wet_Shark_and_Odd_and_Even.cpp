#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long sum = 0;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        sort(arr,arr+n);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = sum - arr[i];
            if(ans % 2 == 0){
                cout << ans << '\n';
                break;
            }
        }
        
    }

    return 0;
}