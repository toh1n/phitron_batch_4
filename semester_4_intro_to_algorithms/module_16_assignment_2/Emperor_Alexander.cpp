#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5 + 5;
long long parent[N];
long long group_size[N];
class Edge
{
public:
    long long u, v, w;
    Edge(long long u, long long v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

void dsu_initialize(long long n)
{
    for (long long i = 1; i <= n; i++)
    {
        parent[i] = i;
        group_size[i] = 1;
    }
}

int dsu_find(long long v)
{
    if (v == parent[v])
    {
        return v;
    }
    long long leader = dsu_find(parent[v]);
    parent[v] = leader;
    return leader;
}

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_union(long long a, long long b)
{
    a = dsu_find(a);
    b = dsu_find(b);
    if (a != b)
    {
        if (group_size[a] < group_size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        group_size[a] += group_size[b];
    }
}

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<Edge> edges;
    for (long long i = 0; i < m; ++i)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    sort(edges.begin(), edges.end(), cmp);
    dsu_initialize(n);
    long long cost = 0;
    long long road = 0;
    for (Edge x : edges)
    {
        long long u = dsu_find(x.u);
        long long v = dsu_find(x.v);

        if (u != v)
        {
            cost += x.w;
            dsu_union(u, v);
        }
        else
        {
            road++;
        }
    }
    for (long long i = 2; i <= n; ++i)
    {
        if (dsu_find(i) != dsu_find(1))
        {
            cout << "Not Possible" << endl;
            return 0;
        }
    }
    cout << road << " " << cost << endl;
    return 0;
}