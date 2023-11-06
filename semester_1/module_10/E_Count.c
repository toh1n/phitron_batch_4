#include <stdio.h>

int main()
{

    char s[1000000];
    int sum = 0;

    gets(s);

    for (int i = 0;s[i] != '\0'; i++)
    {
        sum += s[i] - '0';
    }

    printf("%d\n",sum);
    


    return 0;
}