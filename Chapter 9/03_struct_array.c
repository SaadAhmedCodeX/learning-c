#include <stdio.h>
#include <string.h>

struct employee {
    int code;        // Employee code
    float salary;    // Employee salary
    char name[10];   // Employee name (max 9 characters + null terminator)
};

int main() {
    struct employee facebook[100]; // Array of structures

    // Assigning values to facebook[0]
    facebook[0].code = 100;
    facebook[0].salary = 14.4;
    strcpy(facebook[0].name, "Maddy");

    // Printing details of facebook[0]
    printf("%d %.2f %s\n", facebook[0].code, facebook[0].salary, facebook[0].name);

    // Assigning values to facebook[1]
    facebook[1].code = 77;
    facebook[1].salary = 20.5;
    strcpy(facebook[1].name, "Bobby");

    // Printing details of facebook[1]
    printf("%d %.2f %s\n", facebook[1].code, facebook[1].salary, facebook[1].name);

    // Declaring and initializing another structure variable
    struct employee Saddy = {100, 71.22, "Saddy"};

    // Printing details of Saddy
    printf("%d %.2f %s\n", Saddy.code, Saddy.salary, Saddy.name);

    return 0;
}
