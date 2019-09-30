#include "holberton.h"


/**
 * _strlen - checks length of a string.
 *
 * @s: the string to be evaluated.
 * Return: length.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);

}
