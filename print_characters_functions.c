#include "holberton.h"

/**
 * _printchar - move the chararcter into the buffer.
 *
 * @valist: My list of arguments.
 * @buffer: My buffer is a malloc declaration that I will use for print all.
 * @count: This is the parameter to count the position that should put
 * in the buffer.
 * Return: Always is 0.
 */

int _printchar(va_list valist, char *buffer, int *count)
{
	char c;

	c = va_arg(valist, int);
	moveinto_buffer(buffer, c, count);
	return (0);
}
/**
 * printstr - move each element of a string into a buffer.
 *
 * @valist: My list of arguments.
 * @buffer: My buffer is a malloc declaration that I will use for print all.
 * @count: This is the parameter to count the position that should put
 * in the buffer.
 * Return: Always is 0.
 */
int printstr(va_list valist, char *buffer, int *count)
{
	int it, len;
	char *s;

	s = va_arg(valist, char *);
	len = _strlen(s);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, s[it], count);
	}
	return (0);
}

/**
 * PPS - Print a % if you have %%.
 *
 * @buffer: My buffer is a malloc declaration that I will use for print all.
 * @count: This is the parameter to count the position that should put
 * in the buffer.
 * Return: Always is 0.
 */
int PPS(char *buffer, int *count)
{
	moveinto_buffer(buffer, '%', count);
	return (0);
}
