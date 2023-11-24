//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include <bits/stdc++.h>

using namespace std;

int main()
{

    char x;
    cin >> x;
    if (x > 64 && x < 91)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (x > 96 && x < 123)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    else
    {

        cout << "IS DIGIT" << endl;
    }
}