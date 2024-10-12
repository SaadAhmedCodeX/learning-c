#include <stdio.h>

int main(){
    int a;
    printf("Enter a:\n");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You enterend 1\n");
            break;
        case 2:
            printf("You enterend 2\n");
            break;
        case 3:
            printf("You enterend 3\n");
            break;
        case 4:
            printf("You enterend 4\n");
            break;
        default:
            printf("Nothing Matched\n");
    }
    return 0;
}