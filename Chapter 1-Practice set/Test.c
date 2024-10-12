#include <stdio.h>

int main(){
    int radius, height;
    printf("Enter radius\n");
    scanf("%d",&radius);
    
    printf("Enter height\n");
    scanf("%d",&height);
    printf("The volume of cylinder with radius %d and height %d is %f", radius, height,  3.14*radius*radius*height);
    return 0;
}
