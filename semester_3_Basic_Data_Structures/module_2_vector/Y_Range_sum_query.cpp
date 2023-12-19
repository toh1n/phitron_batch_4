// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    long long r_sum[n] = {0};
    long long prev = 0;
    long long x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        r_sum[i] = prev + x;
        prev = r_sum[i];
    }

    while (q > 0)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long ans = 0;
        if (l == 0)
        {
            ans = r_sum[r];
        }
        else
        {
            ans = r_sum[r] - r_sum[l - 1];
        }
        cout << ans << endl;
        q--;
    }
}

// wrong answer