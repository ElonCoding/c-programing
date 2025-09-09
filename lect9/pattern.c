#include <stdio.h>
int main() {
    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 3 - i; j++) {
            printf(" ");
        }
        for(int k = 0; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}