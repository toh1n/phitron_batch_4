#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int dp[N];

bool knapsack(int cur, int n)
{
    if (cur == n)
    {
        return true;
    }

    if (cur > n)
    {
        return false;
    }

    if (dp[cur] != -1)
    {
        return dp[cur];
    }

    bool add = knapsack(cur + 3, n);
    bool mul = knapsack(cur * 2, n);

    return (dp[cur] = add) || mul;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < N; i++)
    {
        dp[i] = -1;
    }

    while (t--)
    {
        int n;
        cin >> n;

        if (knapsack(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        for (int i = 0; i < N; i++)
        {
            dp[i] = -1;
        }
    }

    return 0;
}
