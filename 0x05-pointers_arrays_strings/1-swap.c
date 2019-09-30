#include "holberton.h"


/**
 * swap_int - swap int values between params.
 *
 * @a: first value to swap
 * @b: second value to swap
 *
*/


void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
