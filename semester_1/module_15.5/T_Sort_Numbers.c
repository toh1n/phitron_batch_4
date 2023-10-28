#include <stdio.h>

void printAscending(int *array,int n){

   for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",array[i]);
    }
    
}

int main()
{

    int a[3],b[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }

    printAscending(a,3);

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",b[i]);
    }
    

    return 0;
}


