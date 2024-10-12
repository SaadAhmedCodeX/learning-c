#include <stdio.h>

int main() {
    float income;
    float tax = 0;
    printf("Enter your annual income: \n");
    scanf("%f", &income);

    if (income <= 300000) {
        tax = 0;
    } 
    else if (income > 300000 && income <= 600000) {
        tax = 0.05 * (income - 300000);
    } 
    else if (income > 600000 && income <= 900000) {
        tax = 0.05 * (600000 - 300000) + 0.10 * (income - 600000);
    } 
    else if (income > 900000 && income <= 1200000) {
        tax = 0.05 * (600000 - 300000) + 0.10 * (900000 - 600000) + 0.15 * (income - 900000);
    } 
    else if (income > 1200000 && income <= 1500000) {
        tax = 0.05 * (600000 - 300000) + 0.10 * (900000 - 600000) + 0.15 * (1200000 - 900000) + 0.20 * (income - 1200000);
    } 
    else { // income > 1500000
        tax = 0.05 * (600000 - 300000) + 0.10 * (900000 - 600000) + 0.15 * (1200000 - 900000) + 0.20 * (1500000 - 1200000) + 0.30 * (income - 1500000);
    }

    printf("The total tax you have to pay is %.2f\n", tax);
    return 0;
}