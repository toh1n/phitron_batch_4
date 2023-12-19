#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<string> myList;
    string v;
    while (1)
    {
        cin >> v;
        if (v == "end")
        {
            break;
        }
        myList.push_back(v);
    }

    int q;
    cin >> q;

    auto pos = myList.begin();

    while (q > 0)
    {

        string c, a;
        cin >> c;
        if (c == "visit")
        {
            cin >> a;
            auto it = find(myList.begin(), myList.end(), a);
            if (it != myList.end())
            {
                pos = it;
                cout << *pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "next")
        {
            if (next(pos) != myList.end())
            {
                pos++;
                cout << *pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "prev")
        {
            if (pos != myList.begin())
            {
                pos--;
                cout << *pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        q--;
    }
}