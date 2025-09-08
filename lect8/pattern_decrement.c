#include <stdio.h>
int main() {
    for(int i = 3; i >= 0; i--) {
        for(int j = 0; j < 3 - i; j++) {
            printf(" ");
        }
        for(int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}