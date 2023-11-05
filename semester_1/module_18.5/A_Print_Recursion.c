#include <stdio.h>


void fun(int n,int i)
{
    if(i == n) return;
    printf("I love Recursion\n");
    fun(n,i+1);
}

int main()
{

    int n;
    scanf("%d",&n);
    int i = 1;

    fun(n,0);

    return 0;
}