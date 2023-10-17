#include <stdio.h>
#include <string.h>

int main()
{

    char s1[11],s2[11];
    char temp;
    scanf("%s%s",&s1,&s2);

    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s%s\n",s1,s2);
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    printf("%s %s\n",s1,s2);

    


    return 0;
}

/*
D. Strings
time limit per test2 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
inputCopy
abcd
ef
outputCopy
4 2
abcdef
ebcd af
*/