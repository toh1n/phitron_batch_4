#include <stdio.h>

int main()
{
    int n,min,max;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    int pos1=0,pos2=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            pos1 = i;
        }
        else if(arr[i] > max)
        {
            max = arr[i];
            pos2 = i;
        }
    }

    arr[pos1] = max;
    arr[pos2] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    return 0;
}

/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
inputCopy
5
4 1 3 10 8
outputCopy
4 10 3 1 8 
*/