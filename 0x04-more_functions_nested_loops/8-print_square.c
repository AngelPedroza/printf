#include "holberton.h"

/**
 * print_square - prints square area with #
 * @n: the size
 *
 */

void print_square(int n)
{
	int l, c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < n; l++)
		{
			for (c = 1; c <= n; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
