#include <stdio.h>

int main()
{

    float x,p;
    scanf("%f%f",&x,&p);
    float ans = p / ((100 - x) / 100);
    printf("%.2f",ans);
    return 0;
}
/*
A. Winter Sale
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104
) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
inputCopy
20 80
outputCopy
100.00
inputCopy
15 20
outputCopy
23.53
*/