#include "holberton.h"

/**
 * wildcmp - compares a string with a string with a wildcard
 * to see if they are  "equal". the wildcard makes thmm equal until
 * a character is different from the original string
 *
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if they are "equal", 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 ==  '*')
	{
		if ((*s2 == '*') && (*s2 + 1 != '\0') && (*s1 == '\0'))
			return (0);

		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
