#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if((n >> 31) & 1) 
        printf("Negative");
    
    else 
        printf("Positive");
        

     
    return 0;
}