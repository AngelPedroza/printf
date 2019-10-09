#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_recursion returns the root square of a number
 *
 * @n: the number to evaluate
 * return: the root sqrt of n | -1 if n doesn't have root sqrt
 *
 * _sqrtrep receives the int n as first parameter in order to perform recursion
 * @a: receives n as input
 * @b: the number to compare by itself to see if it's the sqrt
 *
 */

int _sqrtrep(int a, int b)
{

	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (b = _sqrtrep(a, b + 1));

}

int _sqrt_recursion(int n)
{
	int x;

	return (x = _sqrtrep(n, 1));

}
