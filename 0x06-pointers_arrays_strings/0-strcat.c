#include "holberton.h"

/**
 * _strcat -  concatenates src string to dest string
 *
 * @dest: destination pointer
 * @src: source pointer
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int slen, k, dlen;

	for (dlen = 0; dest[dlen] != '\0'; dlen++)
	{}
	for (slen = 0;  src[slen] != '\0'; slen++)
	{}
	for (k = 0; k < slen; k++)
	{
		dest[dlen + k] = src[k];
	}
	dest[dlen + k] = '\0';
	return (dest);
}
