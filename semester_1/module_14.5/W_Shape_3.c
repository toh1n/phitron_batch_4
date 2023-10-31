#include <stdio.h>

int main()
{
    int n,s,k;
    scanf("%d",&n);

    k = 1;
    s = n-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k = k+2;

        printf("\n");
        
    }

    k = 2 * n - 1;
    s = 0;

    for (int i = n; i > 0; i--)
    {
        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = k; j > 0; j--)
        {
            printf("*");
        }
        s++;
        k = k-2;

        printf("\n");
        
    }

    return 0;
    
}