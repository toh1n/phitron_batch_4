#include <bits/stdc++.h>

using namespace std;

vector<int> v[1005];

bool vis[1005];

int level[1005];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front().first;
        int level = q.front().second;
        q.pop();
        // cout << par << " " << level << endl;
        if (par == des)
        {
            cout << level << endl;
        }
        for (auto child : v[par])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src, 2);
}