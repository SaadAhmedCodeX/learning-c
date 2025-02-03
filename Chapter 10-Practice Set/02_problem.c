#include <stdio.h>

int main(){
    FILE *fptr;
    int num;
    printf("Enter the number for table\n");
    scanf("%d", &num);
    fptr = fopen("table.txt", "w");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d x %d = %d",i, num, num * i);
        fprintf(fptr, "%c", '\n');
    }
    
    return 0;
}