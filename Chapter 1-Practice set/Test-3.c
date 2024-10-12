#include <stdio.h>

int main(){
    float p;
    int r, t;
    printf("Enter p\n");
    scanf("%f",&p);

    printf("Enter r\n");
    scanf("%d",&r);

    printf("Enter t\n");
    scanf("%d",&t);
    
    printf("The value of simple interest is %f", (p*r*t)/100);
    return 0;
}