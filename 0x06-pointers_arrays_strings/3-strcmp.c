#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: diefference between the two integers
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return (res);
}
