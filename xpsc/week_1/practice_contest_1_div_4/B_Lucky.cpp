#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++)
    {
        int cnt = 0, s1 = 0, s2 = 0;

        while (cnt < 3)
        {
            cnt++;
            int x = arr[i] % 10;
            s1 += x;
            arr[i] = arr[i] / 10;
            // cout << x << " ";
        }
        // cout << '\n';
        while (arr[i] > 0)
        {
            int x = arr[i] % 10;
            s2 += x;
            arr[i] = arr[i] / 10;
            // cout << x << " ";
        }

        // cout << '\n';

        // cout << s1 << " " << s2;

        if (s1 == s2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
    }

    return 0;
}