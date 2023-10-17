#include <stdio.h>
#include <string.h>


int main()
{

    char s[1001];
    int flag = 0;
    scanf("%s",&s);

    char reverseString[10001];

    for (int i = 0; i < strlen(s); i++)
    {
        reverseString[i] = s[strlen(s) - i - 1];
    }


    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != reverseString[i])
        {
            flag = 1;
        }
        
    }
    
    
    if(flag == 0)
    {
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    


    return 0;
}

/*
I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
inputCopy
abba
outputCopy
YES
inputCopy
icpcassiut
outputCopy
NO
inputCopy
mam
outputCopy
YES
*/