#include "holberton.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num *= -1;
		_putchar('-');
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
		_putchar((num % 10) + '0');

}
