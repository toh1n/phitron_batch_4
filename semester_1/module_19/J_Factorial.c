#include <stdio.h>


long long int fun(long long int n){

    if (n == 0)
    {
        return 1;
    }
    
    long long int ans = fun(n-1);
    return n * ans;
    
    
}

int main()
{

    int n;
    scanf("%d",&n);

    int x = fun(n);

    printf("%d",x);

    return 0;
}


/*
J. Factorial
time limit per test1 second
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
inputCopy
5
outputCopy
120
*/