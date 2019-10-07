#include "holberton.h"

/**
 * print_diagsums - returns the sum of the diagonal of a matrix
 *
 * @a: the name of the array
 * @size: the size of the array in vertical
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			sum += a[i][j];
		}
	}
	return (sum);
}
