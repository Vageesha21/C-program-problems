#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>=2){
         for(int i=1;i<=n;++i){
             for(int k=2;k<=n-i+1;++k){
                  printf(" ");
             }
             for(int j=1;j<=i;++j){
                 printf("*");
             }
             
                  printf("  ");
             
             
             for(int j=1;j<=i;++j){
                 printf("*");
             }
             printf("\n");
         }
    }
    else{
        printf ("Shape Not Possible");
    }
   
    return 0;
}