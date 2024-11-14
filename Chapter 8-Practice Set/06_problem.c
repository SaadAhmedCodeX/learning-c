#include <stdio.h>
#include <string.h> 

int main() {
    char str[] = "Nfsb!tbsb!qbjtf!ubljzf!lf!offdif!qmbdl!qpmz!nf!ibj";
    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] - 1; 
    }
    printf("%s", str); 
    return 0;
}
