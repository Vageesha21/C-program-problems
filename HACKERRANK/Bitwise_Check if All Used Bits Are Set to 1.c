#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
   
    if (n == 0){
        printf("No");
    }
    else if(n&(n+1)){
        printf("No");
    }
    else
        printf("Yes");
    
    return 0;
}
