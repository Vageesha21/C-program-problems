#include <stdio.h>

int main() {

    float hardness,carbon,strength;
    scanf("%f %f %f",&hardness,&carbon,&strength);
    
    if(hardness>50 && carbon<0.7 && strength>5600)
        printf("The grade of the steel is: 10\nAll of the conditions met.");
    else if(hardness>50 && carbon<0.7 && !(strength>5600) )
        printf("The grade of the steel is: 9\nTwo conditions met.");
    else if(hardness>50 && !(carbon<0.7) && strength>5600 )
        printf("The grade of the steel is: 7\nTwo conditions met.");
    else if( !(hardness>50) && carbon<0.7 && strength>5600 )
        printf("The grade of the steel is: 8\nTwo conditions met.");
    else if(hardness>50 || carbon<0.7 || strength>5600)
        printf("The grade of the steel is: 6\nOnly one condition met.");
    else 
        printf("The grade of the steel is: 5\nNone of the conditions met.");
        
        
        
    return 0;
}
