#include <stdio.h>
#include <string.h>

int main()
{

    char c[1001];
    char x[1001];
    scanf("%s%s",c,x);
    // int size_a = sizeof(c)/sizeof(char);
    // int size_b = sizeof(x)/sizeof(char);

    // int size_a = 0;
    // int size_b = 0;

    // for(int i = 0; c[i] != '\0';i++)
    // {
    //     size_a++;
    // }
    // for(int i = 0; x[i] != '\0';i++)
    // {
    //     size_b++;
    // }
    int size_a = strlen(c);
    int size_b = strlen(x);

    printf("%d %d\n",size_a,size_b);
    printf("%s %s\n",c,x);


    return 0;
}