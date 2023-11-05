#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star_row = (n / 2) + 1 + 5;
    int space = star_row - 1;
    int star = 1;

    for (int i = 0; i < star_row; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star += 2;
    }
    space = star_row - ((n + 1) / 2);

    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}