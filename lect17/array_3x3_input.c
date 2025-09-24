#include <stdio.h>

int main() {
    int arr[3][3];

    printf("Enter elements for a 3x3 array:\n");

    // Loop to get user input for the 3x3 array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nYour 3x3 array is:\n");

    // Loop to print the 3x3 array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}