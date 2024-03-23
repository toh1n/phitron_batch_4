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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;

            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'D')
                {
                    arr[i]++;
                }
                else
                {
                    arr[i]--;
                }
            }

            if (arr[i] > 9)
            {
                arr[i] -= 10;
            }
            else if (arr[i] < 0)
            {
                arr[i] += 10;
            }

            cout << arr[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}