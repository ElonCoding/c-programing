#include <stdio.h>

int main() {
    int arr[] = {2, 6, 0, 8};
    int n = 4;

    printf("Before: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Manual swap
            int temp = arr[pos];
            arr[pos] = arr[i];
            arr[i] = temp;
            pos++;
        }
    }

    printf("After:  [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}