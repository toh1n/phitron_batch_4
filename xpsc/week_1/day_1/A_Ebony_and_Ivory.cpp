#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    vector<int> x, y;

    int i = 0;
    int z = 0;
    while (z <= c)
    {
        x.push_back(a * i);
        z = a * i;
        i++;
    }

    i = 0;
    z = 0;
    while (z <= c)
    {
        y.push_back(b * i);
        z = b * i;
        i++;
    }

    int ans = 0;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < y.size(); j++)
        {
            if (x[i] + y[j] == c)
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }

    cout << "No" << '\n';

    return 0;
}