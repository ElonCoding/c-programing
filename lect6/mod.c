#include <stdio.h>

int main() {
    int a=123;
    int sum=0;
    while (a>0) {
        int lastdigit = a % 10;
        sum=sum+lastdigit;
        a=a/10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
