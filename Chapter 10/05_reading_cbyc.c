#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("saddy.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }

    }
     return 0;
}