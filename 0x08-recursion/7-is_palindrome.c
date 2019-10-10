#include "holberton.h"

/**
 * _strlenrec - returns the length of a string
 *
 * @s: the string to evaluate
 * Return: length
 */

int _strlenrec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s = s + 1;
	return (_strlenrec(s) + 1);
}


/**
 * _strcomp - compares the string using its length
 *
 * @s: the string to evaluate
 * @len: the length of the string
 * Return: 1 if palindrome , 0 if not
 */

int _strcomp(char *s, int len)
{
	if (len <= 0)
		return (1);
	else if (*s == s[len])
		return (_strcomp(s + 1, len - 2));
	else
		return (0);
}


/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to evaluate
 * Return: the value passed by compare
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlenrec(s);
	return (_strcomp(s, len - 1));
}
