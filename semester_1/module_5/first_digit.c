#include <stdio.h>

int main()
{

    int n,prev_n;
    scanf("%d",&n);

    // n = n / 10000;

    while (n != 0)
    {
        prev_n = n;
        n = n / 10;

    }

    if(prev_n % 2 == 0){

        printf("EVEN\n");

    }
    else{
        printf("ODD\n");
    }
    

    

    return 0;
}