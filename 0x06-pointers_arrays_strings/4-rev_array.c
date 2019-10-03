#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 *
 *@a: array
 *@n: number of items
 */

void reverse_array(int *a, int n)
{
	int temp, pen, psa;

	psa = n - 1;
	pen = 0;
	while (pen < psa)
	{
		temp = a[psa];
		a[psa] = a[pen];
		a[pen] = temp;
		pen++;
		psa--;
	}
}
