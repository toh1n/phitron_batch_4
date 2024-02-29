#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    list<int> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    int t;
    cin >> t;
    list<int> tl;
    tl = l;
    tl.sort();
    int cmin = tl.front();
    tl.clear();
    while (t > 0)
    {

        int q;
        cin >> q;
        if (q == 0)
        {
            int x;
            cin >> x;
            l.push_back(x);
            tl = l;
            tl.sort();
            cmin = tl.front();
            cout << cmin << endl;
            tl.clear();
        }
        else if (q == 1)
        {
            if (l.size() > 0)
            {
                cout << cmin << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            l.remove(cmin);
            if (l.size() > 0)
            {
                tl = l;
                tl.sort();
                cmin = tl.front();
                cout << cmin << endl;
                tl.clear();
            }
            else
            {
                cout << "Empty" << endl;
            }
        }

        t--;
    }
}