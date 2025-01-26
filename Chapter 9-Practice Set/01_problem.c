#include <stdio.h>

struct vector
{
    int i;
    int j;
};

int main(){
    struct vector v = {1, 2};
    int product = v.i * v.j;
    printf("The value of vector is %di + %dj\n",v.i, v.j);
    printf("The product of the components is %d\n", product);
    return 0;
}