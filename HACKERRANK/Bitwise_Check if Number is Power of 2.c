#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x=n &(n - 1);
    if(n > 0 &&  x==0) {
        printf("Yes");
    }
    else
        printf("No");


      
    return 0;
}