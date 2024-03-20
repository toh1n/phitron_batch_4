#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int search(string pat, string txt)
    {
        int pl = pat.length();
        int tl = txt.length();
        if (pl > tl)
        {
            return 0;
        }

        map<char, int> p, w;
        for (int i = 0; i < 26; i++)
        {
            p['a' + i]++;
            w['a' + i]++;
        }

        for (int i = 0; i < pl; i++)
        {
            p[pat[i]]++;
            w[txt[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i <= tl - pl; i++)
        {
            if (p == w)
            {
                cnt++;
            }
            w[txt[i]]--;
            w[txt[pl + i]]++;
        }

        return cnt;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}