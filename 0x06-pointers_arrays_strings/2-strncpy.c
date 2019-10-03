#include "holberton.h"

/**
 * _strncpy - copies a string works like strncopy
 *
 * @dest: destination buffer
 * @src: source string
 * @n: the number of bytes to copy
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
