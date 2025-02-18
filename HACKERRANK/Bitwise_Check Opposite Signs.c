#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a=a>>31;
    b=b>>31;
    if(a==b){
        printf("No");
    }
    else
    {
            printf("Yes");
    }
   
    return 0;
}