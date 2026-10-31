#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;

    while (strs[0][i] != '\0') {
        int j = 1;

        while (j < strsSize &&
               strs[j][i] != '\0' &&
               strs[j][i] == strs[0][i]) {
            j++;
        }

        if (j < strsSize) {
            break;
        }

        i++;
    }

    char* result = malloc((size_t)i + 1);

    if (result == NULL) {
        return NULL;
    }

    memcpy(result, strs[0], (size_t)i);
    result[i] = '\0';

    return result;
}