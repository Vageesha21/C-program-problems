#include <stdio.h>

int main() {
    float income;
    scanf("%f",&income);
    
    float tax;
    
    if(income<0){
        printf("INVALID");
    }
    else if(income<=250000){
        tax=0;
        printf("%.2f",tax);
    }
    else if(income>250000 && income<=500000){
        tax=0.05*(income-250000);
        printf("%.2f",tax);
    }
    else if(income>500000 && income<=1000000){
        tax=0.05*(500000-250000)+0.2*(income-500000);
        printf("%.2f",tax);
    }
    else if( income>1000000){
        tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
        printf("%.2f",tax);
    }
    return 0;
}