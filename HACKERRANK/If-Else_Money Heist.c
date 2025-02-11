#include <stdio.h>

int main()
{
    int num0,num1,num2,num3,num4,num5,num6,num7,num8,num9;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",&num0,&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9);
    
    if((num0>=0 && num0<=9) && (num1>=0 && num1<=9) && (num2>=0 && num2<=9) && (num3>=0 && num3<=9) && (num4>=0 && num4<=9) && (num5>=0 && num5<=9) && (num6>=0 && num6<=9) && (num7>=0 && num7<=9) && (num8>=0 && num8<=9) && (num9>=0 && num9<=9))
    {
        int index,rotate;
        
        scanf("%d %d",&index,&rotate);
        
        if(index==0)num0=(num0+rotate)%10;
        else if(index==1)num1=(num1+rotate)%10;
        else if(index==2)num2=(num2+rotate)%10;
        else if(index==3)num3=(num3+rotate)%10;
        else if(index==4)num4=(num4+rotate)%10;
        else if(index==5)num5=(num5+rotate)%10;
        else if(index==6)num6=(num6+rotate)%10;
        else if(index==7)num7=(num7+rotate)%10;
        else if(index==8)num8=(num8+rotate)%10;
        else if(index==9)num9=(num9+rotate)%10;
    }
    
    {
        int index,rotate;
        
        scanf("%d %d",&index,&rotate);
        
        if(index==0)num0=(num0+rotate)%10;
        else if(index==1)num1=(num1+rotate)%10;
        else if(index==2)num2=(num2+rotate)%10;
        else if(index==3)num3=(num3+rotate)%10;
        else if(index==4)num4=(num4+rotate)%10;
        else if(index==5)num5=(num5+rotate)%10;
        else if(index==6)num6=(num6+rotate)%10;
        else if(index==7)num7=(num7+rotate)%10;
        else if(index==8)num8=(num8+rotate)%10;
        else if(index==9)num9=(num9+rotate)%10;
    }
    
    {
        int index,rotate;
        
        scanf("%d %d",&index,&rotate);
        
        if(index==0)num0=(num0+rotate)%10;
        else if(index==1)num1=(num1+rotate)%10;
        else if(index==2)num2=(num2+rotate)%10;
        else if(index==3)num3=(num3+rotate)%10;
        else if(index==4)num4=(num4+rotate)%10;
        else if(index==5)num5=(num5+rotate)%10;
        else if(index==6)num6=(num6+rotate)%10;
        else if(index==7)num7=(num7+rotate)%10;
        else if(index==8)num8=(num8+rotate)%10;
        else if(index==9)num9=(num9+rotate)%10;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",num0,num1,num2,num3,num4,num5,num6,num7,num8,num9);
        
    return 0;
}
