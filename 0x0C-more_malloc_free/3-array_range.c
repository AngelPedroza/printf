#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 *
 * @min: first number of array
 * @max: last number of array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
	{
		return (NULL);
		exit(0);
	}


	ptr = malloc((max - min + 1) * sizeof(int) + 1);
	if (ptr == NULL)
	{
		return (NULL);
		exit(0);
	}

	for (i = min; i <= max; i++)
		ptr[i] = i;

	return (ptr);
}
