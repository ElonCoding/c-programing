#include <stdio.h>

int main() {
    int choice;
    float inr, result;
    const float USD_RATE = 0.012; // Example rate: 1 INR = 0.012 USD
    const float PAK_RATE = 3.0;   // Example rate: 1 INR = 3 PKR

    printf("Money Converter\n");
    printf("1. INR to USD\n");
    printf("2. INR to PAK\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter amount in INR: ");
            scanf("%f", &inr);
            result = inr * USD_RATE;
            printf("INR %.2f = USD %.2f\n", inr, result);
            break;
        case 2:
            printf("Enter amount in INR: ");
            scanf("%f", &inr);
            result = inr * PAK_RATE;
            printf("INR %.2f = PAK %.2f\n", inr, result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}