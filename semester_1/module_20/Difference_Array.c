#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[n];
        for (int i = 0; i < n; i++)
        {
            if (a[i] - b[i] > 0)
            {
                c[i] = a[i] - b[i];
            }
            else
            {
                c[i] = (a[i] - b[i]) * (-1);
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");

        t--;
    }
}