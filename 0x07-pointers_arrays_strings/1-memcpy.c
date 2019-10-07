#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * dest: destination buffer
 * @src: the source buffer
 * @n: number of bytes of memory to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
