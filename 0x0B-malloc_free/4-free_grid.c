#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dim grid previously created by alloc_grid function.
 *
 * @grid: the array to free
 * @height: the height is the first dimension of the array
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height -1; i >= 0 ; i--)
	{
		free(grid[i]);
	}
	free(grid);

	grid = NULL;

}
