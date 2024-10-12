#include <stdio.h>

int main(){
    float feet;

    printf("Enter the length in feet:\n");
    scanf("%f", &feet);

    printf("The length is meters is %f\n", (feet/3.28));

    return 0;
}