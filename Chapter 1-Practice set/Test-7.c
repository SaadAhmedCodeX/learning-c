#include <stdio.h>

int main(){
    float weight, height;
    
    printf("Enter weight in kg:\n");
    scanf("%f", &weight);

    printf("Enter height in meters:\n");
    scanf("%f", &height);

    printf("Your BMI is: %f\n", weight / (height * height));
    
    return 0;
}
