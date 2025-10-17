#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x) {
    // Negative numbers are not palindrome
    if (x < 0) return false;

    // Convert integer to string
    char str[20];
    sprintf(str, "%d", x);

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    int x = 10;
    if (isPalindrome(x))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
