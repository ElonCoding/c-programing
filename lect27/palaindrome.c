#include <stdio.h>

int isPalindrome(int arr[], int start, int end) {
    if (start >= end)
        return 1;
    if (arr[start] != arr[end])
        return 0;
    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if (isPalindrome(arr, 0, n - 1))
        printf("Array is Palindrome\n");
    else
        printf("Array is Not Palindrome\n");
    return 0;
}
