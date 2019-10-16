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
		return (NULL);
	}
	else
	{

		num = malloc(height * sizeof(int *));

		if (num == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			*(num + i) = malloc(width * sizeof(int));
			if (num[i] == NULL)
			{
				for (i = width; i >= 0 ; i--)
				{
					free(num[i]);
				}
				free(num);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				num[i][j] = 0;

		}
	}
	return (num);

	free(num);
}
