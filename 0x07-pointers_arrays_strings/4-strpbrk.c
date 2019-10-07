#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string to evaluate
 * @accept: accepted characters.
 * return: pointer to the first ocurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	}

	return (0);
}
