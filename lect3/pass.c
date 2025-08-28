#include <stdio.h>
#include <string.h>

#define PASSWORD "secret123"
#define MAX_LEN 100

int main() {
    char input[MAX_LEN];

    printf("Enter password: ");
    fgets(input, MAX_LEN, stdin);

    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    if (strcmp(input, PASSWORD) == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}