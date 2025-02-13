#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int diff=a^b;
    if(diff!=0){
        if((diff & (diff-1))==0)
            printf("Yes\n");
        else
             printf("No\n");
    }
     else
             printf("No\n");
    
   
    return 0;
}