#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

/*
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
inputCopy
4
5 1 3 2
outputCopy
2 3 1 5 
inputCopy
5
1 2 3 4 5
outputCopy
5 4 3 2 1 
*/