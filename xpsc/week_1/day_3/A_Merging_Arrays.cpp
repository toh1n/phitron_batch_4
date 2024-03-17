#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    int arr[n + m];
    int k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    // cout << i << ' ' << j << ' ' << k << '\n';

    if (i < n)
    {
        for (int x = i; x < n; x++)
        {
            arr[k] = a[x];
            k++;
        }
    }
    else if (j < m)
    {
        for (int x = j; x < m; x++)
        {
            arr[k] = b[x];
            k++;
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}