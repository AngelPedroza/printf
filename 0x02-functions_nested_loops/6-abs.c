#include "holberton.h"


/**
 * _abs - returns absolute value of a number
 * @int: the number to check
 * Return: absolute number
 * On zero 0.
 */


int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

