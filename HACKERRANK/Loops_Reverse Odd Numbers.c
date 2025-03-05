#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
   
    for(int i=n;i>=1;--i){
        int odd=1+(i-1)*2;
        if(i==1){
            printf("%d.", odd);
        }
        else
             printf("%d ", odd);
    }

    return 0;
}