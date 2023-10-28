#include <stdio.h>

void printNumber(int x){
    for (int i = 1; i < x; i++)
    {
        printf("%d ",i);
    }
    printf("%d",x);
    
}

int main()
{

    int n;
    scanf("%d",&n);

    printNumber(n);

    return 0;
}