#include <stdio.h>

int main()
{

    char a;
    scanf("%c",&a);

    
    if( a == 'z')
    {
        printf("a\n",a);
    } else{
        a = a + 1;
        printf("%c\n",a);
    }
    

    return 0;
}



/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
inputCopy
a
outputCopy
b
Note
The next letter to z is a.
*/