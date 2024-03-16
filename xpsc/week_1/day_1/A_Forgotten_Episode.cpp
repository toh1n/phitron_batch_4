#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        s += x;
    }

    long long s1 = double(n) / 2 * (n + 1);
    cout << s1 - s << '\n';

    return 0;
}