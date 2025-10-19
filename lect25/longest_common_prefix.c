#include <stdio.h>
#include <string.h>
char *longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize == 0) return "";

    static char prefix[201]; // static so it persists after return
    int i, j;

    for (i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = c;
    }

    prefix[i] = '\0';
    return prefix;
}
