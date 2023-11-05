#include <stdio.h>


void fun(int n,int i,int *ar){
    if(i == n) return;
    fun(n,i+1,ar);
    if(i % 2 == 0){
        printf("%d ",ar[i]);
    }
}

int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i = 0;
    fun(n,i,arr);
    

    return 0;
}