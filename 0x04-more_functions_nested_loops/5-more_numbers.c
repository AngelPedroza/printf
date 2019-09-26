#include "holberton.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @c: the character to check
 *
 * Return: On upper 1
 *
 * Otherwise 0.
 */


void more_numbers(void)
{
        int i,j;

        for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar(i + '0');
		}
		putchar('\n');
        }

}
