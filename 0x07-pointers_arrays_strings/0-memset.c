#include "holberton.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: the
 * @b: the charater to fill
 * @n: the number of times to fill
 * Return: poiter to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && s != '\0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
