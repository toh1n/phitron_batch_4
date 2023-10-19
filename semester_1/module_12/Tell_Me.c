#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int x, flag = 0;
        scanf("%d", &x);
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                printf("YES\n");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}

/*
Problem Statement

You will given an integer array A and the size N. You will also be given an integer value X. You need to tell if X was appeared in the array. If X has appeared then print "YES", otherwise print "NO".

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N.
Second line of each test case will contain the integer array A.
Third line of each test case will contain X.
Constraints

1 <= T <= 1000
1 <= N <= 10000
0 <= A[i] <= 10^9; Here 0 <= i < N
0 <= X <= 10^9
Output Format

Output "YES" or "NO" according to the question.
Sample Input 0

2
6
1 2 3 4 5 6
3
5
10 20 30 40 50
70
Sample Output 0

YES
NO
*/