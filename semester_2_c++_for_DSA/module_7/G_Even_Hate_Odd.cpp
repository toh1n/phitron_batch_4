//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            int even_count = 0;
            int odd_count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even_count++;
                }
                else
                {
                    odd_count++;
                }
            }
            if (even_count == odd_count)
            {
                cout << 0 << endl;
            }
            else
            {
                int op = (n / 2) - even_count;
                cout << abs(op) << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }
}