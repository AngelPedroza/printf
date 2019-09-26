#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 */


void more_numbers(void)
{
	int i;
	int j;
	int fd;
	int sd;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			fd = j % 10;
			sd = j / 10;
			if (sd > 0)
			{
				_putchar(sd + '0');
			}
			_putchar(fd + '0');
		}
		_putchar('\n');
	}

}
