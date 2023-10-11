#include <stdio.h>

int main()
{

    int n,min_number,position = 1;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    min_number = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (min_number > arr[i])
        {
            min_number = arr[i];
            position = i + 1;
        }
        
    }

    printf("%d %d\n",min_number,position);

    return 0;
}


/*
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Examples
inputCopy
3
1 2 3
outputCopy
1 1
inputCopy
5
5 6 2 3 2
outputCopy
2 3
*/