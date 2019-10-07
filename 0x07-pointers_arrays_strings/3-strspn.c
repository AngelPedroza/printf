#include "holberton.h"

/**
 * _strspn - returns length (bytes) of substring of chars in acc
 *
 * @s: string to evaluate
 * @accept: the characters accepted
 * Return: llength in bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	c = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (c);
}
