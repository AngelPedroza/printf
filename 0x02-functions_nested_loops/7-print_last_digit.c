#include "holberton.h"


/**
 * print_last_digit - returns last digit of a number
 * @n: the number to check
 * Return: number
 */


int print_last_digit(int n)
{
	int retval = n % 10;

	if (retval < 0)
	{
		_putchar((retval * -1) + '0');
	}
	else
	{
		_putchar(retval + '0');
	}
}
