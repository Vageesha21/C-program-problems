#include <stdio.h>

int main() {

    int a, b, c;
    
    scanf("%d\n", & a);
  
    scanf("%d\n", & b);
   
    scanf("%d\n", & c);
    if(a>b && a>c)
    {
        printf("The largest number is : %d", a);
    }
    else if(b>c && b>a)
    {
         printf("The largest number is : %d", b); 
    }
    else{
          printf("The largest number is : %d" , c);
    }
    
    return 0;
}