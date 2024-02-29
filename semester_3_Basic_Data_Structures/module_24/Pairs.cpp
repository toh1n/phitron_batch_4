#include <bits/stdc++.h>

using namespace std;

bool compare(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}

int main()
{
    int n;
    cin >> n;
    list<pair<string, int>> l;
    for (int i = 0; i < n; i++)
    {
        pair<string, int> p;
        cin >> p.first;
        cin >> p.second;
        l.push_back(p);
    }
    l.sort(compare);
    for (auto &value : l)
    {
        cout << value.first << " " << value.second;
        cout << endl;
    }
}