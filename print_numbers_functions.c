#include "holberton.h"

/**
 * printint - convers an integer to a string and moves it to the buffer
 *
 * @valist: the list where the integer is taken from
 * @buffer: the buffer to copy the number to
 * @count: the number of characters copied to the buffer
 * Return: 0
 */

int printint(va_list valist, char *buffer, int *count)
{
	int i;
	int it, len;
	char *res_int;

	i = va_arg(valist, int);
	if (i < 0)
	{
		i *= -1;
		res_int = convert(i, 10);
		len = _strlen(res_int);
		for (it = 0; it < len + 1; it++)
		{
			if (it == 0)
			{
				moveinto_buffer(buffer, '-', count);
			}
			else
				moveinto_buffer(buffer, res_int[it - 1], count);
		}
	}
	else
	{
		res_int = convert(i, 10);
		len = _strlen(res_int);
		for (it = 0; it < len; it++)
		{
			moveinto_buffer(buffer, res_int[it], count);
		}
	}
	return (0);
}

/**
 * printoctal - converts a number to its base 8 version
 *
 * @valist: the list where the number is taken from
 * @buffer: the buffer to copy to
 * @count: counter of characters moved to the buffer
 * Return: 0
 */

int printoctal(va_list valist, char *buffer, int *count)
{
	int i;
	int it, len;
	char *res_octal;

	i = va_arg(valist, unsigned int);
	res_octal = convert(i, 8);
	len = _strlen(res_octal);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_octal[it], count);
	}

	return (0);
}

/**
 * printhexa - converts an integer to its hexadecimal version
 *
 * @valist: the argument where integer is taken
 * @buffer: the buffer to copy into
 * @count: the counter of spaces moved into the buffer
 * Return: 0
 */

int printhexa(va_list valist, char *buffer, int *count)
{
	int i;
	int it, len;
	char *res_hexa;

	i = va_arg(valist, unsigned int);
	res_hexa = convert(i, 16);
	len = _strlen(res_hexa);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_hexa[it], count);
	}
	return (0);
}

/**
 * printbin - converts an integer to its binary version
 *
 * @valist: the argument where the
 * @buffer: the buffer to copy into
 * @count: counter of spaces put into the buffer
 * Return: 0
 */

int printbin(va_list valist, char *buffer, int *count)
{
	int i;
	int it, len;
	char *res_bin;

	i = va_arg(valist, unsigned int);
	res_bin = convert(i, 2);
	len = _strlen(res_bin);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_bin[it], count);
	}
	return (0);

}

/**
 * printunsigned - prints the usigned version of a number
 *
 * @valist: the argument where the numbre is taken from
 * @buffer: the buffert to copy to
 * @count: count of spaces into the buffer
 * Return: 0
 */

int printunsigned(va_list valist, char *buffer, int *count)
{
	int usint, it, len;
	char *res_usint;

	usint = va_arg(valist, int);
	res_usint = convert(usint, 10);
	len = _strlen(res_usint);
	for (it = 0; it < len; it++)
	{
		moveinto_buffer(buffer, res_usint[it], count);
	}
	return (0);
}
