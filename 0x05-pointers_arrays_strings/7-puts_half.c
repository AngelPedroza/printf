#include "holberton.h"

/**
 * puts_half - prints the after half of a string
 *
 * @str: the string to evaluate
 */

void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	len = i;

	for (i = 0; i < len; i++)
	{
		if (len % 2 == 0)
		{
			if (i < len / 2)
				continue;
			_putchar(*(str + i));

		}
		else
		{
			if (i < (len / 2) + 1)
				continue;
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
