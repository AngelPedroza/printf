#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet - writes holberton followed by a new line
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
