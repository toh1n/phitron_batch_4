#include <stdio.h>

int main()
{

    char c;
    scanf("%c",&c);
    
    if(c > 64 && c < 91 ){
        c = c + 32;
        printf("%c",c);
    } else if(c > 96 && c < 123 ){
        c = c - 32;
        printf("%c",c);
    }

    return 0;
}