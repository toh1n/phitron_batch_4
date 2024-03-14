#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> v;
    map<long long, long long> cnt;
    priority_queue<pair<long long, long long>> pq;

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
            v.push_back(x);
            cnt[x]++;
            pq.push({cnt[x], x});
        }
        else
        {
            if (!v.empty())
            {

                // cout << "from start" << endl;
                // while (!pq.empty() && cnt[pq.top().second] != pq.top().first)
                // {
                //     cout << " : " << endl;
                //     cout << "poped" << endl;
                //     pq.pop();
                // }

                if (!pq.empty())
                {
                    long long max = pq.top().second;
                    cout << max << '\n';

                    v.erase(remove(v.begin(), v.end(), max), v.end());
                    cnt[max] = 0;
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
