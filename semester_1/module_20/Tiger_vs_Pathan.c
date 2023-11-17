#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t > 0)   
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int ti=0,pa=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'T'){
                ti++;
            }
            if(s[i] == 'P'){
                pa++;
            }
        }

        if (pa > ti)
        {
            printf("Pathaan\n");
        } else if (pa < ti)
        {
            printf("Tiger\n");
        }
        else{
            printf("Draw\n");
        }
        
        
        
        t--;
    }
    
}