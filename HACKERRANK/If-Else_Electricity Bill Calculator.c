#include <stdio.h>

int main() {

    int unit;
    scanf("%d",&unit);
    float bill = 0;
    
    
    if (unit<0){
        printf("Invalid Input!");
    }
    else if(unit==0){
        
        printf("The electricity bill is: %.2f.",bill);
    }
            
    
   else if(unit>0 && unit<=100){
        bill=(unit*5);
       if(bill<=1200.00){
                bill*=0.9;
            }
        printf("The electricity bill is: %.2f.",bill);
        
        
    }
    else if (unit>100 && unit<=300){
        bill=(100*5)+(unit-100)*7;
        
            if(bill<=1200.00){
                bill*=0.9;
            }
        printf("The electricity bill is: %.2f.",bill);
    }
    else {
        bill=(100*5)+(200*7)+(unit-300)*10;
        
            if(bill<=1200.00){
                bill*=0.9;
            }
        printf("The electricity bill is: %.2f.",bill);
    }
    
    return 0;
}