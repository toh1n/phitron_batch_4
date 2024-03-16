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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] > i + 1)
            {
                if (cnt + i + 1 < arr[i])
                {
                    if (i == 0)
                    {
                        cnt += arr[i] - 1;
                    }
                    else
                    {
                        cnt += arr[i] - cnt - i - 1;
                    }
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}