#include <stdio.h>

int main(){
    int Age;
    printf("Enter your age:\n");
    scanf("%d",&Age);

    if (Age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}