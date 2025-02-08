#include <stdio.h>

int main()
{

      int a , b;
    scanf("%d", &a);
    scanf("%d", &b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    
    printf("a = %d\nb = %d\n", a , b);
     
    
    return 0;
}