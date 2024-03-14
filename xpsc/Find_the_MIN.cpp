#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long n;
    cin >> n;
    while (n--)
    {
        long long q;
        cin >> q;
        if (q == 1)
        {
            long long x;
            cin >> x;
            pq.push(x);
        }
        else
        {
            if (!pq.empty())
            {
                long long min = pq.top();
                cout << min << '\n';
                while (!pq.empty() && pq.top() == min)
                {
                    pq.pop();
                }
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }

    return 0;
}