#include <stdio.h>

int main() {

    int year;
    scanf("%d\n",&year);
   
     if(year <= 0)
    {
          printf("The given year %d is Invalid year.",year);
           
    }
    
     
    else if  ( year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
         printf("Yes, %d is a leap year.",year);
      
    } 
    else 
    {
             printf("No, %d is not a leap year.",year);
    }
    
    return 0;
}