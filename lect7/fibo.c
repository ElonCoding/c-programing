#include <studio.h>
int main() {
    int n1 = 0, n2 = 1, nextTerm, i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: \n");
    for (i = 1; i <= n; ++i) {
        printf("%d\n", n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    return 0;
}