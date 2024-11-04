#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Saddy";
    char s1[56] = "Saddy";
    char s2[56] = " Bhai";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "Saddy"
    // printf("%s %s",st, target );

    strcat(s1, s2);
    // printf("%s" , s1 );

    int a = strcmp("deep", "joke"); // Negative
    printf("%d", a);
    return 0;
}