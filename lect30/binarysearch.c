#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high)
        return -1; // Target not found
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid; // Target found
    else if (arr[mid] > target)
        return binarySearch(arr, low, mid - 1, target); // Search in left half
    else
        return binarySearch(arr, mid + 1, high, target); // Search in right half
}

int main() {
    int n, target, result, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target element to search: ");
    scanf("%d", &target);
    result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");
    return 0;
}