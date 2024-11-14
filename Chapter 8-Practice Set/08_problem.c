#include <stdio.h>
#include <string.h> 

int main() {
    char c = 'r';
    int contains = 0;
    char str[] = "Saddy";
    for (int i = 0; i < strlen(str); i++) {
        if(str[i] == c){
         contains  = 1;
         break;
        }
    }
    if(contains){
        printf("Yes it contains\n");
    }
    else{
        printf("Does not contian\n");
    }
    return 0;
}
