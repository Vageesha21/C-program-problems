#include <stdio.h>

int main() {
    int x, angle;
   
    scanf("%d", &x);

    angle = x % 360;

    
    if (x < 0) {
        printf("Invalid angle\n");
    } else if (angle == 0 && x != 0) {
        printf("Full Rotation\n");
    } else {
        
        switch (angle) {
            case 0:
                printf("Acute Angle\n"); 
                break;
            case 90:
                printf("Right Angle\n");
                break;
            case 180:
                printf("Straight Angle\n");
                break;
            default:
                if (angle < 90) {
                    printf("Acute Angle\n");
                } else if (angle < 180) {
                    printf("Obtuse Angle\n");
                } else {
                    printf("Reflex Angle\n");
                }
                break;
        }
    }

    return 0;
}
