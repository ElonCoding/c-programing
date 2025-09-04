#include <stdio.h>
int main() {
    for (int a = 1; a <= 100; a++) {
        int isPrime = 1;
        if (a < 2) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= a; i++) {
                if (a % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d is prime\n", a);
        }
    }
    return 0;
}