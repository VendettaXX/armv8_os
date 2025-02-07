#ifndef __EE_STRING_H__
#define __EE_STRING_H__

#include <ee_stdint.h>

char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t count);
int strcmp(const char *cs, const char *ct);
int strncmp(const char *cs, const char *ct, size_t count);

size_t strlen(const char *s);
size_t strnlen(const char *s, size_t count);
char *strstr(const char *s1, const char *s2);
char *strnsrt(const char *s1, const char *s2, size_t len);
int memcmp(const void *cs, const void *ct, size_t count);
void *memchr(const void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t count);
void *memmove(void *dest, const void *src, size_t count);
void *memset(void *s, int c, size_t count);
#endif
