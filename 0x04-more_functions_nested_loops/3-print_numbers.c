#include "holberton.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @c: the character to check
 *
 * Return: On upper 1
 *
 * Otherwise 0.
 */


void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
