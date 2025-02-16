#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int* ptr;
    ptr = (int*) malloc(n* sizeof(int));
    printf("Enter the %d values for to store in array\n",n);
    for (int i = 0; i < n; i++)
       {
        scanf("%d", &ptr[i]);
    }
    printf("The values you stored in array are:\n");
    for (int i = 0; i < n; i++)
       {
        printf("%d\n", ptr[i]);
    }
    
    n = 10;
    ptr = (int*) realloc(ptr,10* sizeof(int));
    printf("Enter the %d values for to store in array\n",n);
    for (int i = 0; i < n; i++)
       {
        scanf("%d", &ptr[i]);
    }
    printf("The values you stored in array are:\n");
    for (int i = 0; i < n; i++)
       {
        printf("%d\n", ptr[i]);
    }
    return 0;
}