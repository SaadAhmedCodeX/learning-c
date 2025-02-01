#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("saddy.txt", "a");
    // char c = fgetc(ptr); // Used to read a character from file
    // printf("%c",c);
    fputc('c', ptr);
    return 0;
}