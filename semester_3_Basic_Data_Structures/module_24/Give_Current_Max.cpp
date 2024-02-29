#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Student> a(n);

    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
        pq.push(a[i]);
    }

    int t;
    cin >> t;
    while (t > 0)
    {
        int q;
        cin >> q;

        if (q == 0)
        {
            Student a;
            cin >> a.name >> a.roll >> a.marks;
            pq.push(a);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }

        if (q == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (q == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }

                else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        t--;
    }
    return 0;
}