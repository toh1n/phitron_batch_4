#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        stack<char> st;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
            }
            else if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
