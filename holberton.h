#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - structure that redirects to other functions.
 *
 * @sp: My pointer to character for make match and select which functions call.
 * @f: My pointer to function.
 */
typedef struct specifier
{
	char *sp;
	int (*f)();
} myforspec;

/*Auxiliar functions*/
int _strlen(char *str);
int _printf(char *format, ...);
void moveinto_buffer(char *buffer, char c, int *count);
char *convert(unsigned int num, int base);

/*Operations of my structure*/
int _printchar(va_list valist, char *buffer, int *i);
int printint(va_list valist, char *buffer, int *i);
int printstr(va_list valist, char *buffer, int *i);
int printhexa(va_list valist, char *buffer, int *i);
int printoctal(va_list valist, char *buffer, int *i);
int printbin(va_list valist, char *buffer, int *i);
int printunsigned(va_list valist, char *buffer, int *count);
int PPS(char *buffer, int *count);
#endif
