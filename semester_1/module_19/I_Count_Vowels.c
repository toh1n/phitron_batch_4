#include <stdio.h>
#include <string.h>

void fun(char *s,int len,int i,int count){

    if(i == len) {
        printf("%d\n",count);
        return;
    }
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
        count++;
    }
    fun(s,len,i+1,count);

    

}

int main()
{

    char s[201];
    gets(s);
    int len = strlen(s);
    int i = 0,count = 0;
    fun(s,len,i,count);
    return 0;
}

/*
I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
inputCopy
Data Structure Lab
outputCopy
6
*/