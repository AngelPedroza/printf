#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;


	if (size == 0)
	{
		return (0);
	}
	else
	{
		arr = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);

	}

}
