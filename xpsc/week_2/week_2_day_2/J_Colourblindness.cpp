#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R' && (s2[i] == 'G' || s2[i] == 'B'))
            {
                cout << "NO" << '\n';
                flag = 1;
                break;
            }
            else if (s2[i] == 'R' && (s1[i] == 'G' || s1[i] == 'B'))
            {
                cout << "NO" << '\n';
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}