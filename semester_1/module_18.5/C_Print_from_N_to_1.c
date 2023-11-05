#include <stdio.h>


void fun(int n,int i)
{
    if(i == 0) return;
    if(i == 1){
        printf("%d",i);
    } else{
        printf("%d ",i);
    }
    
    fun(n,i-1);
}

int main()
{

    int n;
    scanf("%d",&n);
    int i = n;

    fun(n,i);

    return 0;
}