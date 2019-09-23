#include "holberton.h"


/**
 * print_alphabet_x10 - writes alphabet 10 times
 *
 *
 * Return: none
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		int j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
