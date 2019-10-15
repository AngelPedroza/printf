#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to copy
 * Return: new string , 0 if the string is null
 */

char *_strdup(char *str)
{
	char *nstr;
	int i, len;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			len++;
		nstr = malloc(len);
		for (i = 0; str[i] != '\0'; i++)
			nstr[i] = str[i];
		return (nstr);
	}

}