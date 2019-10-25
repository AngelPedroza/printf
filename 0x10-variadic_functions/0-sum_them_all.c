#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its arguments
 *
 * @n: the variadic number of arguments it contains
 * Return: result of the sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
