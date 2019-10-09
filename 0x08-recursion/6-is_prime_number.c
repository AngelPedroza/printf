#include "holberton.h"


/**
 * prime_rep - receives n as first param to do recursion
 *
 * @a: equal to n
 * @b: the number to divide @a by to find if not prime
 * Return: 1 if n is prime number, 0 otherwise
 */

int prime_rep(int a, int b)
{
	if (a % b == 0 && b != a)
		return (0);
	else if (a % b != 0)
		return (prime_rep(a, b + 1));
	else
		return (1);
}

/**
 * is_prime_number - returns 1 if a number is a prime number
 *
 * @n: the number to evaluate
 * Return: 1 if n is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	return (prime_rep(n, 2));
}
