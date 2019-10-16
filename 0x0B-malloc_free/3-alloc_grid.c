#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: the width of the matrix
 * @height: the hegiht of the matrix
 * Return: the pointer to the bidi array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **num;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	else
	{

		num = malloc(height * sizeof(int *));

		if (num == NULL)
			return (0);

		for (i = 0; i < height; i++)
		{
			*(num + i) = malloc(width * sizeof(int));
			if (num[i] == NULL)
				return (0);

			for (j = 0; j < i; j++)
				num[i][j] = 0;

		}
	}
	return (num);

	free(num);
}
