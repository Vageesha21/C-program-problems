#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int factors[100]; 
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            factors[count++] = i;
        }
    }

    for (int i = count - 1; i >= 0; i -= 2) { 
        printf("%d", factors[i]);
        if (i > 1) {
            printf(" ");
        }
    }
    printf(".\n"); 
    return 0;
}