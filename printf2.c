#include <stdarg.h>
#include <stdio.h>
#include "holberton2.h"


int _printf(char *format,...)
{
	int j;
	char *traverse;
        va_list valist;

	myforspec percentage[] = {
		{'c', printchar},
		{'d', printint},
		{'i', printint},
		{'o', printoctal},
		{'s', printstr},
		{'x', printhexa},
		{'b', printbin},
	};

	va_start(valist, format);

	for(traverse = format; *traverse != '\0'; traverse++)
	{
		j = 0;
		while( *traverse != '%' )
		{
			putchar(*traverse);
			traverse++;
		}

		traverse++;
		percentage[j].f(valist);
		j++;
	}

	va_end(valist);
	return (0);
}

void printchar(va_list valist)
{
	int i;
	i = va_arg(valist,int);
	putchar(i);
}
void printint(va_list valist)
{
	int i;
	i = va_arg(valist,int);
	if(i<0)
	{
		i = -i;
		putchar('-');
	}
	puts(convert(i,10));
}
void printoctal(va_list valist)
{
	int i;
	i = va_arg(valist,unsigned int);
	puts(convert(i,8));
}
void printstr(va_list valist)
{
	char *s;
	s = va_arg(valist,char *);
	puts(s);
}
void printhexa(va_list valist)
{
	int i;
	i = va_arg(valist,unsigned int);
	puts(convert(i,16));
}

void printbin(va_list valist)
{
	int i;
	i = va_arg(valist, unsigned int);
	puts(convert(i,2));
}


char *convert(unsigned int num, int base)
{
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return(ptr);
}
