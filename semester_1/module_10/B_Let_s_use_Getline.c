#include <stdio.h>

int main()
{

    char a[1000000];

    gets(a);

    for (int i = 0; a[i] != '\\';  i++)
    {
        printf("%c",a[i]);
    }
    

    return 0;
}