#include "holberton.h"

/**
 * _isdigit - checks for digit char
 * @c: the character to check
 *
 * Return: On upper 1
 *
 * Otherwise 0.
 */


int _isdigit(int c)
{
	int lastnum = 57;
	int firstnum = 48;

	if ((c >= firstnum) && (c <= lastnum))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
