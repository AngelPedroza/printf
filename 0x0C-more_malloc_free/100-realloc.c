#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _memcpy - copies memory area
 *
 * dest: destination buffer
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: number of bytes of memory to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block with malloc & free
 *
 * @ptr:
 * @old_size:
 * @new_size:
 * Return:
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (ptr == NULL)
		malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{}

	nptr = (unsigned int)malloc(new_size);
	if  (ptr = NULL)
		return (NULL);

	_memcpy(*nptr, *ptr, old_size);

	free(ptr);
	return (nptr);

}
