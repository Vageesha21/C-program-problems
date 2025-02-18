#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x=a|b;
    int y=a^b;
    int z=x^y;
    printf("%d", z);
    
    return 0;
}