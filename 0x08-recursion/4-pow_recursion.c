#include "holberton.h"

/**
 * _pow_recursion - returns x to the power of y
 *
 * @x: first integer
 * @y: the power to return x to
 * Return: result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x = x * _pow_recursion(x, y - 1));
}
