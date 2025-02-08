#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num<=0){
        printf("The verdict for the number %d is: INVALID", num);
        return 0;
    }
    int count=0;
    if(num%2==0 && num>10)
        count+=1;
    if(num%3==0 && num>15)
        count+=1;
    if(num%7==0)
        count+=1;
    
    if(count==1)
        printf("The verdict for the number %d is: MAGICAL", num);
    else if(count==2)
        printf("The verdict for the number %d is: MIRACULOUS", num);
    else if(count==3)
        printf("The verdict for the number %d is: SUPERNATURAL", num);
    else
        printf("The verdict for the number %d is: NORMAL", num);
    
    return 0;
    
}