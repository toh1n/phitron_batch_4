#include <bits/stdc++.h>
using namespace std;

char G[1005][1005];
int vis[1005][1005];
int n, m, ans = 1000005;

int fx[] = {-1, 0, 1, 0};
int fy[] = {0, 1, 0, -1};

bool isValid(int ci, int cj)
{

    if (ci >= 0 && ci < n && cj >= 0 && cj < m && vis[ci][cj] == 0 && G[ci][cj] == '.')
        return true;
    return false;
}

int bfs(int si, int sj)
{

    queue<pair<int, int>> Q;
    Q.push({si, sj});
    vis[si][sj] = 1;

    int cnt = 1;

    while (!Q.empty())
    {

        int curri = Q.front().first;
        int currj = Q.front().second;
        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            if (isValid(curri + fx[i], currj + fy[i]))
            {
                Q.push({curri + fx[i], currj + fy[i]});
                vis[curri + fx[i]][currj + fy[i]] = 1;
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> G[i][j];
            vis[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0 && G[i][j] == '.')
            {
                ans = min(bfs(i, j), ans);
            }
        }
    }

    if (ans != 1000005)
        cout << ans << endl;
    else
        cout << "-1\n";

    return 0;
}
