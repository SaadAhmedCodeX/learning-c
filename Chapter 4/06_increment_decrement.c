#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;//10
    printf("The value of i is %d\n", i);
    //++i;//11
     printf("The value of i is %d\n", i++);  
     printf("The value of i is %d\n", i);  

    i +=2; // Same as i = i + 2;
    printf("The value of i is %d\n", i);  //13

     
    //  i++ prints first and then increments i (Post increment Operator)
    //  ++i increments first and then prints i (Post increment Operator)
    return 0;
}