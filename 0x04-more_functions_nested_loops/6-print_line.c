#include "holberton.h"


/**
 * print_numbers - print numbers from 0 to 9
 * @c: the character to check
 *
 * Return: On upper 1
 *
 * Otherwise 0.
 */

void print_line(int n)
{
	int i;
	if (!(i < 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
