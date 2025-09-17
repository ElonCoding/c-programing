#include <stdio.h>

void subarray_sums_min3(int arr[], int n) {
    int found = 0;
    for (int i = 0; i <= n - 3; i++) {
        int sum = arr[i] + arr[i+1] + arr[i+2];
        printf("Sum of arr[%d..%d] = %d\n", i, i+2, sum);
        found = 1;
        for (int j = i + 3; j < n; j++) {
            sum += arr[j];
            printf("Sum of arr[%d..%d] = %d\n", i, j, sum);
        }
    }
    if (!found) {
        printf("No subarrays with at least 3 elements.\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    subarray_sums_min3(arr, n);
    return 0;
}