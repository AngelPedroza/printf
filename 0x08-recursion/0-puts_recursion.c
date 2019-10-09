#include "holberton.h"

/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: the pointer to the string to print
 *
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_putchar(s[i]);
	if (s[i] != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
