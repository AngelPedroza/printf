#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concats
 *
 * @dest: dest
 * @src: src
 * Return: char concatenated
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i++] = src[n];
		n++;
	}
	return (dest);
}

/**
 * _strlen - lenght
 *
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
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
	char *nstr;



	if (s1 == NULL)
	{
		s1 = "";

	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	nstr = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);

	if (nstr == NULL)
		return (NULL);

	_strcat(nstr, s1);
	_strcat(nstr, s2);
	return (nstr);

}
