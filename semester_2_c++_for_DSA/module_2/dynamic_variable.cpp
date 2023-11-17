#include <bits/stdc++.h>

using namespace std;

int * fun(){
    int *a = new int;
    *a = 1000;
    return a;
}

int main(){
    int *a  = new int;
    *a = 10;
    cout << *a << endl;
    int *s = fun();
    cout << *s << endl;
}