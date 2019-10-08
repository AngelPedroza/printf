#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - returns the sum of the diagonal of a matrix
 *
 * @a: the name of the array
 * @size: the size of the array in vertical
 *
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, sum1, sum2, tam;

	tam = size;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < tam; i++)
	{
		sum1 += *(a + ((tam + 1) * i));

	}
	printf("%d ", sum1);
	for (i = 0; i < tam ; i++)
	{
		sum2 += *(a + ((tam - 1) * i) + tam - 1);
	}
	printf("%d\n", sum2);

}
