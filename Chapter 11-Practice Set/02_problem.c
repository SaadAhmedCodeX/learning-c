#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    printf("Enter the 6 values for to store in array\n");
    for (int i = 1; i <= n; i++)
       {
        scanf("%d", &ptr[i]);
    }
    printf("The values you stored in array are:\n");
    for (int i = 1; i <= n; i++)
       {
        printf("%d\n", ptr[i]);
    }
    

    return 0;
}