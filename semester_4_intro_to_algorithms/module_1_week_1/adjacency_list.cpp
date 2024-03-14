#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,e;
    cin >> n >> e;
    vector<int> vec[n];
    while (e--)
    {
        int a,b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        
    }
    
    

}