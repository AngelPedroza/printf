#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

int _printf(char *format,...);
char* convert(unsigned int, int);

typedef struct specifier
{
	char c;
	void (*f)(va_list valist);
} myforspec;

void printchar(va_list valist);
void printint(va_list valist);
void printstr(va_list valist);
void printhexa(va_list valist);
void printoctal(va_list valist);
void printbin(va_list valist);
char *convert(unsigned int num, int base);

#endif
