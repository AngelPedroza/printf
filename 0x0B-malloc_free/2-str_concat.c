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
	char *sr1, *sr2;
	char *nstr;


	len1 = _strlen(s1);

	len2 = _strlen(s2);

	nstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (nstr == NULL)
		return (NULL);

	if (s1 == NULL)
	{
		s1 = "";
		len1 = 0;

	}
	if (s2 == NULL)
	{
		s2 = "";
		len2 = 0;
	}

	for (i = 0; i <= len1; i++)
	{
		nstr[i] = sr1[i];
	}

	for (i = len1 + 1, j = 0 ; j <= len2; i++, j++)
	{
		nstr[i] = sr2[j];
	}
	return (nstr);

}
