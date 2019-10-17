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
	}


	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
