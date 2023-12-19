#include <bits/stdc++.h>

using namespace std;

int main(){

    
    int n;
    cin >> n;
    vector<int> v(n+n,0);

    for (int i = n; i < n+n; i++)
    {
        int x;
        cin >> x;
        v.insert(v.begin() + i,x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert(v.begin(),x);
    }

    for (int i = 0; i < n+n; i++)
    {
        cout << v[i] << " ";
    }
    
    
    cout << endl;
    
    
    
    
    
}