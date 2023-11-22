//https://codeforces.com/contest/1676/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int f_sum = 0, l_sum = 0;
        int m = 0;
        for (int i = 0; i < 3; i++)
        {
            m = n % 10;
            f_sum += m;
            n = n / 10;
        }
        m = 0;
        for (int i = 0; i < 3; i++)
        {
            m = n % 10;
            l_sum += m;
            n = n / 10;
        }
        if (f_sum == l_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
}