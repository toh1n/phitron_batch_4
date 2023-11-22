//https://codeforces.com/contest/1703/problem/B

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int l;
        cin >> l;
        char s[l];
        cin >> s;
        sort(s, s + l);
        int count = 2;
        char prev_c = s[0];
        for (int i = 1; i < l; i++)
        {

            if (prev_c == s[i])
            {
                count++;
            }
            else
            {
                count += 2;
            }
            prev_c = s[i];
        }
        cout << count << endl;
        t--;
    }
}