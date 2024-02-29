#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        set<int> st;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        for (auto i = st.begin(); i != st.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;

        t--;
    }
}