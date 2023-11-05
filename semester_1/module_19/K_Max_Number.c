#include <stdio.h>


void fun(long long int ar[],int n,int i,long long int max_num){

    if(i == n){
        printf("%lld",max_num);
        return;
    }
    if (ar[i] > max_num)
    {
        max_num = ar[i];
    }
    fun(ar,n,i++,max_num);
    

}

int main()
{

    int n;
    scanf("%d",&n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%lld",&ar[i]);
    }

    fun(ar,n,0,ar[0]);

    return 0;
}