#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int N = n & -n;

    printf("%d\n", N);
    
    return 0;
}
