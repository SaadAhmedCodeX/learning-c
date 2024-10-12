#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    
    printf("Enter the vlaue of b:\n");
    scanf("%d",&b);
   
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    // Modulus operator is used to ge tthe remainder
    printf("The remanider when a is divided by b is %d\n", a%b);
    return 0;
}