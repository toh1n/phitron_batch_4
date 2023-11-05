#include <stdio.h>

int main()
{

    int n;
    scanf("%d%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] <= min)
        {
            min = ar[i];
        }
    }
    printf("%d",min);

    int min_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == min)
        {
            min_count++;
        }
    }

    if (min_count % 2 == 0)
    {
        printf("Unlucky");
    } else{
        printf("Lucky");
    }
    
    

    return 0;
}