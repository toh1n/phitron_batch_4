#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char nm[101];
    int cls;
    char section;
    int id;
};

int main()
{

    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm;
        cin >> arr[i].cls;
        cin >> arr[i].section;
        cin >> arr[i].id;
    }
    Student rev_arr[n];
    for (int i = 0; i < n; i++)
    {
        rev_arr[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i].section = rev_arr[i].section;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << endl;
    }
}