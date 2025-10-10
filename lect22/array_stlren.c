#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAMES 5
#define MAX_LEN 50

void print_chars(const char *name) {
    int ln = strlen(name);
    for (int i = 0; i < ln; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
}

void print_reverse(const char *name) {
    int ln = strlen(name);
    for (int i = ln - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }
    printf("\n");
}

void process_names(char **names, int count, void (*printer)(const char *)) {
    for (int i = 0; i < count; i++) {
        printer(names[i]);
    }
}

int main() {
    // Dynamic allocation for array of strings
    char *names[MAX_NAMES];
    const char *init_names[MAX_NAMES] = {
        "Parikshit Sharma",
        "Sumit",
        "Harsh",
        "Amit",
        "Priya"
    };

    // Copy initial names to dynamically allocated memory
    for (int i = 0; i < MAX_NAMES; i++) {
        names[i] = (char *)malloc(MAX_LEN * sizeof(char));
        strncpy(names[i], init_names[i], MAX_LEN - 1);
        names[i][MAX_LEN - 1] = '\0'; // Ensure null-termination
    }

    printf("Printing names normally:\n");
    process_names(names, MAX_NAMES, print_chars);

    printf("\nPrinting names in reverse:\n");
    process_names(names, MAX_NAMES, print_reverse);

    // Print lengths of each name
    printf("\nLengths of each name:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s: %zu\n", names[i], strlen(names[i]));
    }

    // Free allocated memory
    for (int i = 0; i < MAX_NAMES; i++) {
        free(names[i]);
    }

    return 0;
}