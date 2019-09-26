#include "holberton.h"

/**
 * _isupper - checks for uppercase char :v
 * @c: the character to check
 *
 * Return: On upper 1
 *
 * Otherwise 0.
 */


int _isupper(int c)
{
	int lastcap = 90;
	int firstcap = 65;

	if ((c >= firstcap) && (c <= lastcap))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
