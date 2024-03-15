//https://atcoder.jp/contests/abc071/tasks/abc071_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 97] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            char x = i + 97;
            cout << x << '\n';
            return 0;
        }
    }

    cout << "None" << '\n';

    return 0;
}