#include <bits/stdc++.h>

using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;
    int n, o;
    cin >> n >> o;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < o; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n == o)
    {
        bool flag = true;
        while (n > 0)
        {
            if (st.top() != q.front())
            {
                flag = false;
            }
            st.pop();
            q.pop();
            n--;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}