#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    else{
        printf("Your age is not greater than 10");
    }
    return 0;
}