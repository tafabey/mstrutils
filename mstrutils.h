#ifndef MSTRUTILS_H
#define MSTRUTILS_H

int mstrlen(const char *str);
int mstrcmp(const char *str1, const char *str2);
char *mstrcpy(char *dst, const char *src);
char *mstrchr(const char *str, int ch);
char *mstrstr(const char *str, const char *substr);
int mstrncmp(const char *str1, const char *str2, int n);
char *mstrncpy(char *dst, const char *src, int n);
char *mstrcat(char *dst, const char *src);

#endif
