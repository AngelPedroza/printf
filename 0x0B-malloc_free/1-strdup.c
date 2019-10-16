#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - returns the lenght of a strin
 *
 * @s: the string to evaluate
 * Return: lenght
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	return (i);
}


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
		return (NULL);
	}

	else
	{
		len = _strlen(str);
		nstr = malloc(len + sizeof(char) + 1);

		if (nstr == NULL)
			return (NULL);
		for (i = 0; str[i] != '\0'; i++)
		{
			nstr[i] = str[i];
		}
		return (nstr);
	}

}
