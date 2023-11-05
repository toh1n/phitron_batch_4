#include <stdio.h>

int main()
{

    int r,c;
    scanf("%d%d",&r,&c);

    int a[r][c],b[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}

/*
N. Sum of a Matrix
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given two matrices A and B of size R * C. Print the summation of A and B.

Note: Solve this problem using recursion.

Input
First line contains two numbers R and C (1 ≤ R, C ≤ 100). number of rows and number of columns respectively.

Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.

Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers.

Output
Print the summation result.

Example
inputCopy
2 3
1 2 3
4 5 6
1 3 5
7 9 11
outputCopy
2 5 8
11 14 17
*/