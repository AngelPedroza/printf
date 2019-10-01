#include "holberton.h"

/**
 * _strcpy - copies the string in *src to buffer in *dest
 *
 * @dest: the destination pointer
 * @src: the source pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = *(src + i);
	return (dest);
}
