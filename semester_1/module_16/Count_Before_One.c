#include <stdio.h>

int main()
{
    int n,s,k;
    scanf("%d",&n);
    s = n-1;
    k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <s; j++)
        {
            printf(" ");
        }
        if(i % 2 == 0)
        {
            for (int j = 0; j < k; j++)
        {
            printf("-");
        }
        } else{
               for (int j = 0; j < k; j++)
        {
            printf("#");
        }
        }
        
        s--;
        k = k + 2 ;
        
        printf("\n");
        
    }

    s = 1;
    k = 2 * n - 1 -2;

    for (int i = n ; i > 1; i--)
    {
        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }
        
        if(i % 2 == 0) {
            for (int j = k; j > 0; j--)
        {
            printf("#");
        }
        } else{
            for (int j = k; j > 0; j--)
        {
            printf("-");
        }
        }
        
        s++;
        k = k - 2 ;
        
        printf("\n");
        
    }
    
}