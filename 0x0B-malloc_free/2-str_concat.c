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
 * str_concat - Write a function that concatenates two strings.
 *
 * @s1: the first string to concatenate
 * @s2: the second string to concat
 * Return: new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *nstr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);


	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	else
	{
		nstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
		for (i = 0; i <= len1; i++)
		{
			nstr[i] = s1[i];
		}

		for (i = len1 + 1, j = 0 ; j <= len2; i++, j++)
		{
			nstr[i] = s2[j];
		}
		return (nstr);
	}



}
