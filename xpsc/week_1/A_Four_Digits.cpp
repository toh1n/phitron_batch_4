//https://atcoder.jp/contests/abc222/tasks/abc222_a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a = n;
    int cnt = 4;
    if (n == 0)
    {
        cout << "0000" << '\n';
    }
    else
    {
        while (a > 0)
        {
            a = a / 10;
            cnt--;
        }

        for (int i = 0; i < cnt; i++)
        {
            cout << 0;
        }
        cout << n << '\n';
    }

    return 0;
}