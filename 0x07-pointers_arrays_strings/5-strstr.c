#include "holberton.h"

/**
 * _strstr - finds the first ocurrence of a substring
 *
 * @haystack: the string to look into
 * @needle: the substring to look for
 * Return: pointer to first ocurrence of needle
 */

char *_strstr(char *haystack, char *needle)
{
	const char *pajar;
	const char *aguja;

	aguja = needle;

	if (*aguja == 0)
		return ((char *) haystack);

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *aguja)
			continue;
		pajar = haystack;
		while (1)
		{
			if (*aguja == 0)
				return ((char *) haystack);
			if (*pajar++ != *aguja++)
				break;
		}
		aguja = needle;
	}

	return (0);
}
