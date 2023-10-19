#include <stdio.h>
#include<string.h>

int main()
{

    char s1[21],s2[21];
    scanf("%s%s",&s1,&s2);

    int result = strcmp(s1,s2);

    if(result == -1)
    {
        printf("%s\n",s1);
    } else if (result == 1)
    {
        printf("%s\n",s2);
    } else{
        printf("%s\n",s1);
    }
    

    return 0;
}

/*
C. Compare
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
inputCopy
acm
acpc
outputCopy
acm
*/