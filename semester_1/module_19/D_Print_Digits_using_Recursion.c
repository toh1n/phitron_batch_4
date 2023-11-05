#include <stdio.h>

void fun(long long int i){

    if(i == 0) return;
    int ans = i % 10;
    i = i / 10;
    fun(i);
    printf("%d ",ans);
    

}

int main()
{

    int t;
    scanf("%d",&t);
    while (t > 0)
    {
        long long int n;
        scanf("%lld",&n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }
        
        printf("\n");
        t--;
    }
    
    return 0;
}

/*
D. Print Digits using Recursion
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

Example
inputCopy
3
121
39
123456
outputCopy
1 2 1 
3 9 
1 2 3 4 5 6 
*/