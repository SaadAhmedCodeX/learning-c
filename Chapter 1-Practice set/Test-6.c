#include <stdio.h>
int main(){
    float radius;
    printf("Enter radius\n");
    scanf("%f",&radius);
    
    printf("The area of the circle is: %.2f\n",  3.14159 * radius * radius);

    return 0;
}