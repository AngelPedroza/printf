#include "holberton.h"

/**
 * string_toupper - converts letters in a string to uppercase
 *
 * @s: stre string to be evaluated
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
