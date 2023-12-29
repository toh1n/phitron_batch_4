#include <bits/stdc++.h>

using namespace std;

int main()
{

    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int op;
        cin >> op;
        if (op == 0)
        {
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
}