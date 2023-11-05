#include <stdio.h>

int main()
{

    int n,k;
    scanf("%d%d",&n,&k);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
              if (ar[i] > ar[j])
              {
                long long int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
              }
        }
        
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            if (k == 0)
            {
                break;
            }
            
            sum += ar[i];
            k--;
        }
        
        
    }

    printf("%lld",sum);
    
    

    return 0;
}

/*
https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
Choose Elements
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array a
 of n
 integers, and an integer k
You can choose at most k
 elements and get their summation.

What is the maximum summation you can get?

Input
The first line contains two integers n
 and k(1≤k≤n≤103)
 the number of elements in the array a
 and the maximum elements you can choose respectively.

The second line contains n
 integers ai(−109≤ai≤109)
 the elements of the array a
.

Output
Output the maximum summation you can get.

Examples
inputCopy
2 2
1 2
outputCopy
3
inputCopy
2 1
1 2
outputCopy
2
inputCopy
3 3
1 2 3
outputCopy
6
*/