#include <stdio.h>
#include <string.h>

struct BankAccount
{
    char name[20];
    int pin;
    int balance;
};

int main()
{
    struct BankAccount user1 = {"Alex", 1234, 180000};
    struct BankAccount user2 = {"Jhon", 7410, 160000};
    struct BankAccount user3 = {"Doe", 8520, 452000};

    int choice, enteredPin, amount, withdraw;

    printf("\n");
    printf("=====================================\n");
    printf("      Welcome To IBS ATM Machine     \n");
    printf("=====================================\n\n");
    printf("----------- Select Account -----------\n");
    printf("  1. Alex\n");
    printf("  2. Jhon\n");
    printf("  3. Doe\n");
    printf("--------------------------------------\n");
    printf("Enter your choice (1-3): ");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Hello %s, Welcome back to IBS ATM\n", user1.name);
        printf("Please enter your PIN \n");
        scanf("%d", &enteredPin);

        if (enteredPin == user1.pin)
        {
            printf("Account Balance: %d\n", user1.balance);
            printf("\n------------- Account Menu -------------\n");
            printf(" 1. Withdraw Money\n");
            printf(" 2. Exit\n");
            printf("----------------------------------------\n");
            printf("Enter your option: ");
            scanf("%d", &withdraw);

            if (withdraw == 1)
            {
                printf("Enter the amount to withdraw: ₹");
                scanf("%d", &amount);

                if (amount <= user1.balance)
                {
                    user1.balance = user1.balance - amount;
                    printf("Collect your cash!\n");
                    printf("Remaining balance: ₹%d\n", user1.balance);
                    printf("\nThank you for using IBS ATM. Have a great day!\n");
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
            }
            else
            {
                printf("\nThank you for using IBS ATM. Have a great day!\n");
                return 0;
            }
        }
        else
        {
            printf("Incorrect PIN.\n");
            printf("Try again!\n");
            return 0;
        }
    }

    else if (choice == 2)
    {
        printf("Hello %s, Welcome back to IBS ATM\n", user2.name);
        printf("Please enter your PIN \n");
        scanf("%d", &enteredPin);

        if (enteredPin == user2.pin)
        {
            printf("Account Balance: %d\n", user2.balance);
            printf("\n------------- Account Menu -------------\n");
            printf(" 1. Withdraw Money\n");
            printf(" 2. Exit\n");
            printf("----------------------------------------\n");
            printf("Enter your option: ");
            scanf("%d", &withdraw);

            if (withdraw == 1)
            {
                printf("Enter the amount to withdraw: ₹");
                scanf("%d", &amount);

                if (amount <= user2.balance)
                {
                    user2.balance = user2.balance - amount;
                    printf("Collect your cash!\n");
                    printf("Remaining balance: ₹%d\n", user2.balance);
                    printf("\nThank you for using IBS ATM. Have a great day!\n");
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
            }
            else
            {
                printf("\nThank you for using IBS ATM. Have a great day!\n");
                return 0;
            }
        }
        else
        {
            printf("Incorrect PIN.\n");
            printf("Try again!\n");
            return 0;
        }
    }

    else if (choice == 3)
    {
        printf("Hello %s, Welcome back to IBS ATM\n", user3.name);
        printf("Please enter your PIN \n");
        scanf("%d", &enteredPin);

        if (enteredPin == user3.pin)
        {
            printf("Account Balance: %d\n", user3.balance);
            printf("\n------------- Account Menu -------------\n");
            printf(" 1. Withdraw Money\n");
            printf(" 2. Exit\n");
            printf("----------------------------------------\n");
            printf("Enter your option: ");
            scanf("%d", &withdraw);

            if (withdraw == 1)
            {
                printf("Enter the amount to withdraw: ₹");
                scanf("%d", &amount);

                if (amount <= user3.balance)
                {
                    user3.balance = user3.balance - amount;
                    printf("Collect your cash!\n");
                    printf("Remaining balance: ₹%d\n", user3.balance);
                    printf("\nThank you for using IBS ATM. Have a great day!\n");
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
            }
            else
            {
                printf("\nThank you for using IBS ATM. Have a great day!\n");
                return 0;
            }
        }
        else
        {
            printf("Incorrect PIN.\n");
            printf("Try again!\n");
            return 0;
        }
    }

    return 0;
}