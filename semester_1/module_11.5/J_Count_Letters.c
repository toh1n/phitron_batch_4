#include <stdio.h>

int main()
{

    char s[10000001];
    scanf("%s",&s);
    int arr[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] > 0 )
        {
            printf("%c : %d\n",i + 'a',arr[i]);
        }
    }
    
    
    return 0;
}

/*
J. Count Letters
time limit per test2 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.

Examples
inputCopy
aaabbc
outputCopy
a : 3
b : 2
c : 1
inputCopy
regff
outputCopy
e : 1
f : 2
g : 1
r : 1
*/