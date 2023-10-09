#include <stdio.h>

int main()
{

    char c;
    scanf("%c",&c);
    
    if(c > 64 && c < 91 ){
        printf("ALPHA\nIS CAPITAL\n");
    } else if(c > 96 && c < 123 ){
        printf("ALPHA\nIS SMALL\n");
    } else if(c > 47 && c < 58 ){
        printf("IS DIGIT\n");
    } 

    return 0;
}