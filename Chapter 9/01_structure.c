#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user degined data type!
    float salary;
    char name[10];
}; // Semi colon is important

int main()
{
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name,"Saddy");
    e1.salary = 54.4;

    printf("Code: %d\nSalary: %.2f\nName: %s", e1.code, e1.salary, e1.name);
    return 0;
}