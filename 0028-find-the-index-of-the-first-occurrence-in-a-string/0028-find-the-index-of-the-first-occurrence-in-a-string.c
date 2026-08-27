#include <string.h>

int strStr(char* haystack, char* needle) {
    int j, f = 0;

    for(int i = 0; i + strlen(needle) <= strlen(haystack); i++) {
        f = 0;

        for(j = 0; j < strlen(needle); j++) {
            if(haystack[i + j] == needle[j]) {
                f = 0;
            } else {
                f = -1;
                break;
            }
        }

        if(f == 0) {
            return i;
        }
    }

    return -1;
}