#include <stdio.h>

// Custom string length function
int mystrlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Custom string copy function
void mystrcpy(char target[], char source[]) {
    for (int i = 0; i <= mystrlen(source); i++) { // Include '\0'
        target[i] = source[i];
    }
}

int main() {
    char source[] = "Saddy";
    char target[30];
    
    // Use custom string copy function
    mystrcpy(target, source);

    // Print source and target strings
    printf("%s %s\n", source, target);

    return 0;
}
