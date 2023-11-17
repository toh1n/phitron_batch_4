#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    char name[101];
    char section;
    int totalMarks;
};

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {

        Student students[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].roll;
            cin >> students[i].name;
            cin >> students[i].section;
            cin >> students[i].totalMarks;
        }
        int ar[3] = {0};

        Student highestScorer = students[0];
        for (int i = 1; i < 3; ++i)
        {
            if (students[i].totalMarks > highestScorer.totalMarks ||
                (students[i].totalMarks == highestScorer.totalMarks && students[i].roll < highestScorer.roll))
            {
                highestScorer = students[i];
            }
        }

        cout << highestScorer.roll << " " << highestScorer.name << " " << highestScorer.section << " " << highestScorer.totalMarks << endl;

        t--;
    }

    return 0;
}