#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char nm[101];
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    if (a.eng_marks > b.eng_marks)
    {
        return true;
    }
    else if (a.eng_marks < b.eng_marks)
    {
        return false;
    }
    else if (a.math_marks > b.math_marks)
    {
        return true;
    }
    else if (a.math_marks < b.math_marks)
    {
        return false;
    }
    else
    {

        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

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
        cin >> arr[i].math_marks;
        cin >> arr[i].eng_marks;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
}