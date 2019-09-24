#include "holberton.h"


/**
 * print_sign - checks the sign of a number
 * @n: the number to check
 * Return: On positive 1
 * On zero 0.
 * on negative -1
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

