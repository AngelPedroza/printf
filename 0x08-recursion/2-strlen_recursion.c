#include "holberton.h"

/**
 * _strlen_recursion - gets the length of a string
 *
 * @s: the string to evaluate
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s = (s + 1);
	return (_strlen_recursion(s) + 1);
}
