#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Enter 5 new values to overwrite the array:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
