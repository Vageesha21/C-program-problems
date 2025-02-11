#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);
     scanf("%d", &i);
    
    n=n&(~(1<<i));
    printf("%d", n);

    
    return 0;
}