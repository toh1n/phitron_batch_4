#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t > 0)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        map<string, int> mp;

        string mw;
        int mc = 0;

        string word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mc)
            {
                mc = mp[word];
                mw = word;
            }
        }
        cout << mw << " " << mc << endl;
        t--;
    }

    return 0;
}