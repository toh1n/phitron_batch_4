#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        string s;
        string t = "Timur";
        cin >> n >> s;
        if (n != 5)
        {
            cout << "NO" << '\n';
            continue;
        }
        map<char, int> smp, tmp;
        for (int i = 0; i < 5; i++)
        {
            smp[s[i]]++;
            tmp[t[i]]++;
        }
        if (smp == tmp)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}