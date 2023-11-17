#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {

        int n, s;
        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int flag = 1;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i+1; j < n - 1; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (ar[i] + ar[j] + ar[k] == s)
                    {
                        flag = 0;
                    }
                }
            }
        }

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}