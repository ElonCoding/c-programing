#include <stdio.h>
int isSorted(int arr[], int n, int i, int j) {
    if (n < 0 || i >= j)
        return 1;
    if (arr[i] > arr[j])
        return 0;
    return isSorted(arr, n, i + 1, j - 1);
}
int main() {
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n, 0, n - 1))
        printf("Array is Sorted\n");
    else
        printf("Array is Not Sorted\n");
    return 0;
}