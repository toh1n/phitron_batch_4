#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> myList;
    int v;
    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        myList.push_back(v);
    }

    myList.sort();
    myList.unique();

    for (auto it = myList.begin(); it != myList.end();it++)
    {
        cout << *it << " ";
    }
}