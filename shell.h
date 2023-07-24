#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 1024

int _putchar(char c);
int _strlen(const char *s);
void _puts(char *s);
char *_strcpy(char *dest, const char *src);
char *_strdup(const char *src);
char *_strcat(char *dest, char *src);
int _strcmp(const char *s1, const char *s2);
int _atoi(const char *nstr);
void print_num(int num);
void *_realloc(void *ptr, size_t size);
char *_memcpy(char *dest, char *src, size_t size);
char *_getline(FILE *stream);

#endif
