#include "holberton.h"


/**
 * _isalpha - checks for lowercase or upercase alpha char
 * @c: the character to check
 * Return: On lowercase 1
 * Otherwise 0.
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
