#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter the side of the square:\n");
    scanf("%d", &a);
    
    printf("The area of this square is %.2f\n", pow(a, 2));
    return 0;
}