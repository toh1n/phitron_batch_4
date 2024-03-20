#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0;
    vector<long long> f, w;

    while (r < n)
    {
        if (arr[r] < 0)
            w.push_back(arr[r]);

        if ((r - l + 1) == k)
        {
            if (w.empty())
                f.push_back(0);
            else
                f.push_back(w.front());

            if (arr[l] < 0)
                w.erase(w.begin());

            l++;
        }
        r++;
    }
    for (int i = 0; i < f.size(); i++)
    {
        cout << f[i] << " ";
    }

    cout << '\n';

    return 0;
}