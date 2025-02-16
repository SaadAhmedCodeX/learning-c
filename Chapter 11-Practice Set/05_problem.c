#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++) {
        ptr[i] = 7 * (i + 1);
    }
    printf("Multiplication Table (10 elements):\n");
    for (int i = 0; i < n; i++) {
        printf("7 x %d = %d\n", i + 1, ptr[i]);
    }

    n = 15;
    ptr = (int*) realloc(ptr,15* sizeof(int));
    for (int i = 0; i < n; i++) {
        ptr[i] = 7 * (i + 1);
    }
    printf("\nMultiplication Table (15 elements):\n");
    for (int i = 0; i < n; i++) {
        printf("7 x %d = %d\n", i + 1, ptr[i]);
    }

    free(ptr);
    return 0;
}