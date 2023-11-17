#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int ar[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    if (r != c)
    {
        printf("NO\n");
    }
    else
    {
        int flag = 0;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (ar[i][j] != 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                else if (i + j == r - 1)
                {
                    if (ar[i][j] != 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                else if (ar[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}