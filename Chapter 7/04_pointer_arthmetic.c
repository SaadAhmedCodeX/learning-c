#include <stdio.h>

int main(){
    // PONTIER ARITHMETIC USING INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf ("The address of a is %u\n", &a);
    // printf ("The address of a is %u\n", ptr);
    // ptr++;
    // printf ("The value of ptr is %u\n", ptr);

    // PONTIER ARITHMETIC USING CHARACTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf ("The address of a is %u\n", &a);
    printf ("The address of a is %u\n", ptr);
    ptr++;
    printf ("The value of ptr is %u\n", ptr);
    return 0;
}