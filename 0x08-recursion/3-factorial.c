#include "holberton.h"

/**
 * factorial - prints the factorial of a number
 *
 * @n: the input number
 * Return: the factorial number, 1 if the number is 0, -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
