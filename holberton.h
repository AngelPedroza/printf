#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
	char *sp;
	int (*f)();
} myforspec;
/*Auxiliar functions*/
int _strlen(char *str);
int _printf(char *format,...);
void moveinto_buffer(char *buffer, char c, int position);


/*Operations of my structure*/
int _printchar(va_list valist, char *buffer, int i);
int printint(va_list valist, char *buffer, int i);
int printstr(va_list valist, char *buffer, int i);
int printhexa(va_list valist, char *buffer, int i);
int printoctal(va_list valist, char *buffer, int i);
int printbin(va_list valist, char *buffer, int i);
char *convert(unsigned int num, int base);
#endif
