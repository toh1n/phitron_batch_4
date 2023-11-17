#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t > 0)   
    {
        long long int res,a,b,c;
        scanf("%lld%lld%lld%lld",&res,&a,&b,&c);

        if (res % (a*b*c) != 0)
        {
            printf("-1\n");
        } else{
            printf("%lld\n",res / (a*b*c));
        }
        

        t--;
    }
    
}