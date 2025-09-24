#include <stdio.h>

int main() {
    int arr[3][3];
    int temp;

    printf("Enter elements for a 3x3 array:\n");

    // Loop to get user input for the 3x3 array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nOriginal 3x3 array:\n");
    // Loop to print the original 3x3 array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Reverse the array (treating it as a 1D array)
    int total_elements = 3 * 3;
    for (int k = 0; k < total_elements / 2; k++) {
        // Calculate 2D indices for the current element
        int r1 = k / 3;
        int c1 = k % 3;

        // Calculate 2D indices for the corresponding element from the end
        int k_rev = (total_elements - 1) - k;
        int r2 = k_rev / 3;
        int c2 = k_rev % 3;

        // Swap the elements
        temp = arr[r1][c1];
        arr[r1][c1] = arr[r2][c2];
        arr[r2][c2] = temp;
    }

    printf("\nReversed 3x3 array:\n");
    // Loop to print the reversed 3x3 array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}