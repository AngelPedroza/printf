#include "holberton.h"

/**
 * print_alphabet - prints the alphabet lowercase
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
