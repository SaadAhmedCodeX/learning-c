#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    ptr = (float*) malloc (n* sizeof (float));

    ptr[0] = 3.464;
    ptr[1] = 16.534;
    ptr[2] = 62.456;
    ptr[3] = 36.789;
    ptr[4] = 21.165;
    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}