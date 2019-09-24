#include "holberton.h"


/**
 * _islower - checks for lowercase char
 * @c: the character to check
 *
 * Return: On lowercase 1
 *
 * Otherwise 0.
 */


int _islower(int c)
{
	int lastcase = 123;
	int firstcase = 97;

	if ((c >= firstcase) && (c <= lastcase))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
