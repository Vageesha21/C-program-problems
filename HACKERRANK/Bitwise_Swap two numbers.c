#include <stdio.h>

int main() {
    int A , B ;
    scanf("%d", &A);
     scanf("%d", &B);
    A = A^B;
    B = A^B;
    A = A^B;
    
    printf("%d\n%d", A, B);

 
    return 0;
}