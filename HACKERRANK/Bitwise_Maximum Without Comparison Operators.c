#include <stdio.h>

int main() {

   
   int a , b;
    scanf("%d %d", &a , &b);
   int c = (a - b);
    int z=(c >> 31) & 1;
    int max= a * (1-z) + b * z;
   printf("%d", max);
   
        
    return 0;
}