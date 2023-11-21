//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int r_ar[n] = {0};
    for (int i = 0; i < n; i++)
    {
        r_ar[i] = ar[n-i-1];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != r_ar[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}