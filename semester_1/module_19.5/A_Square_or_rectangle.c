#include <stdio.h>

int main()
{

    int t;
    scanf("%d",&t);
    while (t >0)
    {
        int h,w;
        scanf("%d%d",&h,&w);
        if (h == w)
        {
            printf("Square\n");
        } else{
            printf("Rectangle\n");
        }
        
        t--;
    }
    

    return 0;
}

/*

A. Square or rectangle
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given the width and the height of a shape determine whether it's for a square or a rectangle?

Input
The first line contains a single integer t(1≤t≤1000)
 the number of test cases.

The first and only line of each test case contains two integers w,h(1≤w,h≤106)
 representing the width and the height, respectively.

Output
For each test case print 'Square' if the shape is a square otherwise print 'Rectangle';

Example
inputCopy
3
10 10
13 200
300 300
outputCopy
Square
Rectangle
Square
*/