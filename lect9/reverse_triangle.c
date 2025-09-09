#include <stdio.h>
int main() {
    int rows = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
