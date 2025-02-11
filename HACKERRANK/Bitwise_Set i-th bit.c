#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    scanf("%d", &i);
    
    N=N | 1<<i;
    printf("%d", N);
     
    return 0;
}