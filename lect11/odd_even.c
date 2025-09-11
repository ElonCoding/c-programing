#include <stdio.h>
void checkOddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    checkOddEven(number);

    return 0;
}