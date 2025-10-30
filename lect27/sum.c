#include <stdio.h>

int recursive_sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + recursive_sum(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of first %d natural numbers is: %d\n", num, recursive_sum(num));
    return 0;
}
