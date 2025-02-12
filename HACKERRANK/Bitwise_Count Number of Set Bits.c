#include <stdio.h>

int main() {

   int n, a;
    scanf("%d ", &n);
    a=n&15;
    int count=(a&1)+((a>>1)&1)+((a>>2)&1)+((a>>3)&1);
    printf("%d", count);
    
    return 0;
}