#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> myList;
    int q;
    cin >> q;
    while (q > 0)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            if (myList.empty())
            {
                myList.push_back(v);
            }
            else
            {
                myList.push_front(v);
            }
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else
        {
            if (v < myList.size())
            {
                if (v == 0)
                {
                    myList.pop_front();
                }
                else if (v == myList.size() - 1)
                {
                    myList.pop_back();
                }
                else
                {
                    myList.erase(next(myList.begin(), v));
                }
            }
        }

        cout << "L -> ";
        for (auto it = myList.begin(); it != myList.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        myList.reverse();
        cout << "R -> ";
        for (auto it = myList.begin(); it != myList.end(); it++)
        {
            cout << *it << " ";
        }
        myList.reverse();

        cout << endl;
        q--;
    }
}