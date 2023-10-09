#include <stdio.h>

int main()
{

    int n, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {


        if(arr[i] >= 0){
            if (arr[i] != 0)
            {
            pos++;
            }

            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else{
                odd++;
            }
            
           
        } else{
            neg++;
            arr[i] = arr[i] * -1;
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    return 0;
}