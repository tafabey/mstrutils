#include "mstrutils.h"

int mstrlen(const char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;

    return len;
}

int mstrcmp(const char *str1, const char *str2) {
    for (int i = 0; ; i++) {
        if (str1[i] != str2[i])
            return 1;
        if (str1[i] == '\0')
            return 0;
    }

    return 0;
}

char *mstrcpy(char *dst, const char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];

    dst[i] = '\0';
    return dst;
}

char *mstrchr(const char *str, int ch) {
    while (str++) {
	if (*str == ch)
	    return (char*) str;
    }
    
    return 0;
}

char *mstrstr(const char *str, const char *substr) {
    int ctr = 0;
    
    while (str++) {
	if (*str == substr[ctr]) {
	    ctr++;
	} else {
	    ctr = 0;
	}
	
	if (ctr == mstrlen(substr)) {
	    return (char*) str - ctr + 1;
	}
    }

    return "";
}
