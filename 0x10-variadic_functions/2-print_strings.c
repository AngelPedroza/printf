#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a variable number of strings
 *
 * @separator: separator character
 * @n: number of strings to be apssed to the function 
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		char *value = va_arg(valist, char *);

		if ( value == NULL)
			printf("(nil)");

		if (separator == NULL)
			printf("%s", value);
		else
		{
			if (i == n - 1)
				printf("%s", value);
			else
				printf("%s%c ", value, *separator);
		}

	}
	printf("\n");
}
