#include <stdio.h>

int main() {

   int a , b, c;
    scanf("%d %d", &a , &b);
    c = (a - b);
     if(c>>31 & 1)
   printf("%d", a);
    else
        printf("%d", b);
        
    return 0;
}