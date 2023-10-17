#include <stdio.h>
#include <string.h>


int main()
{

    char s[1000001];
    scanf("%s",&s);

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] > 64 && s[i] < 91 )
        {
            s[i] = s[i] + 32;
        } 
        else if (s[i] > 96 && s[i] < 123 )
        {
            s[i] = s[i] - 32;
        } else if(s[i] == ','){
            s[i] = ' ';
        }
        
    }

    printf("%s",s);
    

    return 0;
}

/*
G. Conversion
time limit per test2 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
inputCopy
happy,NewYear,enjoy
output
*/