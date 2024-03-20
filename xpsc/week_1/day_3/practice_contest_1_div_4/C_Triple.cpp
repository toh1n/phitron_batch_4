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
        long long n;
        cin >> n;
        map<long long, int> mp;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
            mp[x]++;
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] >= 3)
            {

                flag = 1;
                cout << arr[i] << '\n';
                break;
            }
        }

        if (flag == 0)
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}