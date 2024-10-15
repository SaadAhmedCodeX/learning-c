#include <stdio.h>

int change(int a);

int change(int a){
    a = 77; // Misnomer
}


int main(){
    int b = 22;
    change(b); // The value of b remains 22
    printf("%d\n",b);

    return 0;
           
}