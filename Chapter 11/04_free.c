#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc (n, sizeof (int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);
    return 0;
}