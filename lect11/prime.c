#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    for (int a = 1; a <= 100; a++) {
        if (is_prime(a)) {
            printf("%d is prime\n", a);
        }
    }
    return 0;
}
