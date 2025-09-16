#include <stdio.h>

int main() {
    int arr[5]; 

    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}