#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    
    
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            for(int k=2;k<=i;k++)
            {
                printf(" ");
            }
            for(int j=1;j<=2*(n-i+1)-1;j++)
            {
                if( j==1 || j==2*(n-i+1)-1)
                  printf("*");
                else if((i==1 && j%2!=0) || (i==n && j%2!=0))
                    printf("*");
                else
                  printf(" ");
            }       
            printf("\n");
        }
        
        for(int i=2;i<=n;i++)
        {
            for(int k=2;k<=n-i+1;k++)
            {
                printf(" ");
            }
            for(int j=1;j<=2*i-1;j++)
            {
                if( j==1 || j==2*i-1)
                  printf("*");
                else if((i==1 && j%2!=0) || (i==n && j%2!=0))
                    printf("*");
                else
                  printf(" ");
            }       
            printf("\n");
        }
            
       
    }
    
    else
        printf("Shape Not Possible");
    return 0;
}