#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of members
 * @size: size of each member
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *ptr;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	for (i = 0; ptr[i] != '\0'; i++)
	{
		ptr[i] = 0;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
