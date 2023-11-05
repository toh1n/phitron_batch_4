#include <stdio.h>


void fun(int n,int i,long long int *ar,long long int sum){
    if(i == n) {
        printf("%lld\n",sum);
        return;
    }
    sum += ar[i];
    fun(n,i+1,ar,sum);
}

int main()
{

    int n;
    scanf("%d",&n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    int i = 0;
    long long int sum = 0;
    fun(n,i,arr,sum);
    

    return 0;
}