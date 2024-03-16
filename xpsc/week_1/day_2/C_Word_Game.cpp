//https://codeforces.com/problemset/problem/1722/C
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

        map<string, int> mp;
        string arr[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                arr[i][j] = s;
                mp[s]++;
            }
        }

        int p[3] = {0, 0, 0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[arr[i][j]] == 1)
                {
                    p[i] += 3;
                }
                else if (mp[arr[i][j]] == 2)
                {
                    p[i] += 1;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            cout << p[i] << " ";
        }

        cout << '\n';

        mp.clear();
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string p1[n], p2[n], p3[n];
//         int p1s[n], p2s[n], p3s[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> p1[i];
//             p1s[i] = 3;
//             p2s[i] = 3;
//             p3s[i] = 3;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> p2[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> p3[i];
//         }



//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (p1[i] == p2[j] && p1[i] == p3[j])
//                 {
//                     p1s[i] = 0;
//                 }
//                 else if (p1[i] == p2[j] || p1[i] == p3[j])
//                 {
//                     p1s[i] -= 2;
//                     if (p1s[i] < 0)
//                     {
//                         p1s[i] = 0;
//                     }
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (p2[i] == p1[j] && p2[i] == p3[j])
//                 {
//                     p2s[i] = 0;
//                 }
//                 else if (p2[i] == p1[j] || p2[i] == p3[j])
//                 {
//                     p2s[i] -= 2;
//                     if (p2s[i] < 0)
//                     {
//                         p2s[i] = 0;
//                     }
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (p3[i] == p1[j] && p3[i] == p2[j])
//                 {
//                     p3s[i] = 0;
//                 }
//                 else if (p3[i] == p1[j] || p3[i] == p2[j])
//                 {
//                     p3s[i] -= 2;
//                     if (p3s[i] < 0)
//                     {
//                         p3s[i] = 0;
//                     }
//                 }
//             }
//         }

//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans += p1s[i];
//         }
//         cout << ans << ' ';
//         ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans += p2s[i];
//         }
//         cout << ans << ' ';
//         ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans += p3s[i];
//         }
//         cout << ans << ' ' << '\n';
//         ans = 0;
//     }

//     return 0;
// }
