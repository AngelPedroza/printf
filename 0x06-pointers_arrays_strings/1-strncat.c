#include "holberton.h"

/**
 * _strncat - concatenates two strings using n bytes
 *
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes in source to be copied
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen, slen, k;

	for (slen = 0; src[slen] != '\0'; slen++)
	{}
	for (dlen = 0; dest[dlen] != '\0'; dlen++)
	{}
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[dlen + k] = src[k];
	dest[dlen + k] = '\0';

	return (dest);
}
