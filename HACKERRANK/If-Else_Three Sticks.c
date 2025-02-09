#include <stdio.h>

int main() {
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    
    if(!(s1+s2>s3) || !(s3+s2>s1) || !(s1+s3>s2))
        printf("Lengths: [%d, %d, %d]\nType: Invalid\nCannot form a valid shape.",s1,s2,s3);
    else if(s1==s2 && s2==s3 && s3==s1)
        printf("Lengths: [%d, %d, %d]\nType: Equilateral\nAll sides are of the same length.",s1,s2,s3);
    else if(s1!=s2 && s2!=s3 && s3!=s1)
        printf("Lengths: [%d, %d, %d]\nType: Scalene\nAll sides are of different lengths.",s1,s2,s3);
    else
        printf("Lengths: [%d, %d, %d]\nType: Isosceles\nExactly two sides are equal.",s1,s2,s3);
   
    return 0;
}