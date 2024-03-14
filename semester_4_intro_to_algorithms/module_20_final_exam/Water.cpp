#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> h1;
        vector<pair<int, int>> h2;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            h1.push_back({h, i});
            h2.push_back({h, i});
        }

        sort(h1.begin(), h1.end());

        for (pair<int, int> v : h2)
        {
            if (h1[n - 2].second == v.second)
            {
                cout << v.second << " ";
            }

            if (h1[n - 1].second == v.second)
            {
                cout << v.second << " ";
            }
        }

        cout << endl;
    }

    return 0;
}