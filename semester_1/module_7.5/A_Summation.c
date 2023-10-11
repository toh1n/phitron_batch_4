#include <stdio.h>

int main()
{

    long long int n,sum = 0;
    scanf("%lld",&n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum < 0)
    {
        sum *= -1;
    }

    printf("%lld\n",sum);
    
    
    return 0;
}

/*
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.*/