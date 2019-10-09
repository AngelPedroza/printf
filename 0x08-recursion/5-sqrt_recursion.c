#include "holberton.h"

/**
 * _sqrtrep - receives the int n as first parameter to perform recursio
 * @a: receives n as input
 * @b: the number to compare by itself to see if it's the sqrt
 * Return: the square root | -1 if there are no sq
 */

int _sqrtrep(int a, int b)
{

	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (b = _sqrtrep(a, b + 1));

}

/**
 * _sqrt_recursion - returns the square root of an integer
 *
 * @n: the integer to evaluate
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int x;

	return (x = _sqrtrep(n, 1));

}
