#include "3-calc.h"

/**
 * op_add - adds two numbers
 *
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substract two numbers
 *
 * @a: first integer
 * @b: second integer
 * Return: result
 */


int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two numbers
 *
 * @a: first integer
 * @b: second integer
 * Return: result
 */


int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two numbers
 *
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - returns a modulo of a number divided by another
 *
 * @a: first integer
 * @b: second integer
 * Return: modulo
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
