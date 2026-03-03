#include "mstrutils.h"

#ifndef NULL
#define NULL ((void*)0)
#endif

int mstrlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
	len++;
    }
    
    return len;
}

int mstrcmp(const char *str1, const char *str2) {
    for (int i = 0;; i++) {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];

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
    for (int i = 0; str[i] != '\0'; i++) {
	if (str[i] == ch) {
	    return (char*) str + i;
	}
    }

    return NULL;
}

char *mstrstr(const char *str, const char *substr) {
    int ctr = 0;
    int ctr_start = 0;
    int sublen = mstrlen(substr);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == substr[ctr]) {
	    if (ctr == 0) {
		ctr_start = i;
	    }
            ctr++;
        } else {
            ctr = 0;
	    ctr_start++;
	    i = ctr_start - 1;
        }

        if (ctr == sublen) {
            return (char *)&str[i - sublen + 1];
        }
    }

    return NULL;
}

int mstrncmp(const char *str1, const char *str2, int n) {
    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
    }

    return 0;
}

char *mstrncpy(char *dst, const char *src, int n) {
    int i;
    for (i = 0; i < n; i++)
        dst[i] = src[i];

    dst[i] = '\0';
    return dst;
}

char *mstrcat(char *dst, const char *src) {
    int dstlen = mstrlen(dst);

    for (int i = 0; src[i] != '\0'; i++) {
        dst[dstlen + i] = src[i];
    }

    return (char*)dst;
}

char *mstrncat(char *dst, const char *src, int n) {
    int dstlen = mstrlen(dst);

    for (int i = 0; src[i] != '\0' && i < n; i++) {
        dst[dstlen + i] = src[i];
    }

    return (char*)dst;
}

void *mmemcpy(void *dst, const void *src, int n) {
    char *ptr1 = (char*)dst;
    char *ptr2 = (char*)src;
    for (int i = 0; i < n; i++) {
        *ptr1++ = *ptr2++;
    }

    return dst;
}

int mmemcmp(const void *ptr1, const void *ptr2, int n) {
    char *cp1 = (char*)ptr1;
    char *cp2 = (char*)ptr2;
    for (int i = 0; i < n; i++)
        if (cp1[i] != cp2[i])
            return cp1[i] - cp2[i];

    return 0;
}

void *mmemmove(void *dst, const void *src, int n) {
    char *ptr1 = (char*)dst;
    char *ptr2 = (char*)src;
    if (dst < src) {
        for (int i = 0; i < n; i++) {
            ptr1[i] = ptr2[i];
        }
    } else {
        for (int i = n - 1; i >= 0; i--) {
            ptr1[i] = ptr2[i];
        }
    }

    return dst;
}

void *mmemset(void *dst, int ch, int n) {
    char *ptr = (char*)dst;
    for (int i = 0; i < n; i++) {
	ptr[i] = (char)ch;
    }
    
    return dst;
}

char *mstrrchr(const char *str, int ch) {
    int slen = mstrlen(str);
    for (int i = slen - 1; i > 0; i--) {
	if (str[i] == ch) {
	    return (char*)str + i;
	}
    }

    return NULL;
}

void *mmemchr(const void *ptr, int c, int n) {
    if (ptr == NULL) {
	return NULL;
    }
    char *str = (char*)ptr;
    for (int i = 0; i < n; i++) {
	if (str[i] == c) {
	    return &str[i];
	}
    }
    
    return NULL;
}
