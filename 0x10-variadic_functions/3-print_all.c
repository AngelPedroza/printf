#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>


/**
 *  print_all - prints all
 *
 * @format: list of arg types passed to the function
 *
 *
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list valist;

	va_start(valist, format);

	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			printf("%s", va_arg(valist, char *));
			break;
		default:
			i++;
			continue;
		}
		if (i < format[(i + 1)])
		{
			printf(",");
		}
		i++;

	}
	printf("\n");

}
