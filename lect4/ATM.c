#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0; // Initial balance
    float amount;
while (1)
{

    printf("ATM MENU\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Check Balance
        printf("\nYour Current Balance: Rs. %.2f\n", balance);
        break;

    case 2: // Deposit
        printf("\nEnter amount to deposit: ");
        scanf("%f", &amount);
        if (amount > 0)
        {
            balance += amount;
            printf("Amount Deposited Successfully!\n");
        }
        else
        {
            printf("Invalid deposit amount!\n");
        }
        break;

    case 3: // Withdraw
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            printf("Please collect your cash.\n");
        }
        else if (amount > balance)
        {
            printf("Insufficient Balance!\n");
        }
        else
        {
            printf("Invalid withdrawal amount!\n");
        }
        break;

    case 4: // Exit
        printf("\nThank you for using ATM. Goodbye!\n");
        return 0;

    default: // Invalid input
        printf("\nInvalid choice! Please try again.\n");

        return 0;
    }
}
}



