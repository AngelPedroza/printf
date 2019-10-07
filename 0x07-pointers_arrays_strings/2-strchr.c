#include "holberton.h"

/**
 * _strchr - returns a pointer to the first ocurrence of char c
 *
 * @s: string to look into
 * @c: the character to look for
 * Return: pointer to the ffirst ocurrence
 */

char *_strchr(char *s, char c)
{

	for ( ; *s; s++)
	{
		if (*s == c)
			break;
	}
	if (*s == c)
		return (s);
	return (0);
}
