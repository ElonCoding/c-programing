#include <stdio.h>

int main() {
    int num1, num2, magic;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    magic = (num1 * num1) + (num2 * num2);

    printf("Magic = %d\n", magic);

    return 0;
}